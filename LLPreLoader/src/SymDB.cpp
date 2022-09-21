#include <pch.h>
#include <cstdio>
#include <string_view>
#include <thread>
#include <unordered_map>

#include <vector>
#include <mutex>

#include <detours/detours.h>
#include <rawpdb/PDB.h>
#include <rawpdb/PDB_RawFile.h>
#include <rawpdb/PDB_InfoStream.h>
#include <rawpdb/PDB_DBIStream.h>

#include <parallel_hashmap/phmap.h>

#include <Logger.h>
#include <Utils.h>

#include <FakeSymbol.hpp>

using std::string, std::string_view;
using std::unordered_map, std::unordered_multimap, std::vector;

struct ap_hash {
    size_t operator()(const string& x) const {
        uint64_t rval = 0;
        for (size_t i = 0; x[i]; ++i) {
            if (i & 1) {
                rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
            } else {
                rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
            }
        }
        return rval;
    }
};

namespace MemoryMappedFile {
struct Handle {
    HANDLE file;
    HANDLE fileMapping;
    void* baseAddress;
};

MemoryMappedFile::Handle Open(const wchar_t* path) {
    HANDLE file =
        CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr);
    if (file == INVALID_HANDLE_VALUE) {
        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    HANDLE fileMapping = CreateFileMappingW(file, nullptr, PAGE_READONLY, 0, 0, nullptr);
    if (fileMapping == nullptr) {
        CloseHandle(file);

        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    void* baseAddress = MapViewOfFile(fileMapping, FILE_MAP_READ, 0, 0, 0);
    if (baseAddress == nullptr) {
        CloseHandle(fileMapping);
        CloseHandle(file);

        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    return Handle{file, fileMapping, baseAddress};
}

void Close(Handle& handle) {
    UnmapViewOfFile(handle.baseAddress);
    CloseHandle(handle.fileMapping);
    CloseHandle(handle.file);

    handle.file = nullptr;
    handle.fileMapping = nullptr;
    handle.baseAddress = nullptr;
}
} // namespace MemoryMappedFile

namespace {
PDB_NO_DISCARD bool IsError(PDB::ErrorCode errorCode) {
    switch (errorCode) {
        case PDB::ErrorCode::Success:
            return false;

        case PDB::ErrorCode::InvalidSuperBlock:
            Error("Invalid Superblock");
            return true;

        case PDB::ErrorCode::InvalidFreeBlockMap:
            Error("Invalid free block map");
            return true;

        case PDB::ErrorCode::InvalidSignature:
            Error("Invalid stream signature");
            return true;

        case PDB::ErrorCode::InvalidStreamIndex:
            Error("Invalid stream index");
            return true;

        case PDB::ErrorCode::UnknownVersion:
            Error("Unknown version");
            return true;
    }
    return true;
}

PDB_NO_DISCARD bool HasValidDBIStreams(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream) {
    if (IsError(dbiStream.HasValidImageSectionStream(rawPdbFile)))
        return false;
    if (IsError(dbiStream.HasValidPublicSymbolStream(rawPdbFile)))
        return false;
    if (IsError(dbiStream.HasValidGlobalSymbolStream(rawPdbFile)))
        return false;
    if (IsError(dbiStream.HasValidSectionContributionStream(rawPdbFile)))
        return false;
    return true;
}
} // namespace

bool fastDlsymStat = false;
static uintptr_t imageBaseAddr;

std::mutex dlsymLock;
phmap::flat_hash_map<string, int, ap_hash>* funcMap;
unordered_multimap<int, string*>* rvaMap;

void InitFastDlsym(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream) {
    Info("Loading symbols from pdb...");
    funcMap = new phmap::flat_hash_map<string, int, ap_hash>;
    const PDB::ImageSectionStream imageSectionStream = dbiStream.CreateImageSectionStream(rawPdbFile);
    const PDB::CoalescedMSFStream symbolRecordStream = dbiStream.CreateSymbolRecordStream(rawPdbFile);
    const PDB::PublicSymbolStream publicSymbolStream = dbiStream.CreatePublicSymbolStream(rawPdbFile);
    {
        const PDB::ArrayView<PDB::HashRecord> hashRecords = publicSymbolStream.GetRecords();
        const size_t count = hashRecords.GetLength();

        for (const PDB::HashRecord& hashRecord : hashRecords) {
            const PDB::CodeView::DBI::Record* record = publicSymbolStream.GetRecord(symbolRecordStream, hashRecord);
            const uint32_t rva =
                imageSectionStream.ConvertSectionOffsetToRVA(record->data.S_PUB32.section, record->data.S_PUB32.offset);
            if (rva == 0u)
                continue;
            funcMap->emplace(record->data.S_PUB32.name, rva);

            auto fake = FakeSymbol::getFakeSymbol(record->data.S_PUB32.name);
            if (fake.has_value())
                funcMap->emplace(fake.value(), rva);
        }
        const PDB::ModuleInfoStream moduleInfoStream = dbiStream.CreateModuleInfoStream(rawPdbFile);
        const PDB::ArrayView<PDB::ModuleInfoStream::Module> modules = moduleInfoStream.GetModules();
        for (const PDB::ModuleInfoStream::Module& module : modules) {
            if (!module.HasSymbolStream())
                continue;
            const PDB::ModuleSymbolStream moduleSymbolStream = module.CreateSymbolStream(rawPdbFile);
            moduleSymbolStream.ForEachSymbol([&imageSectionStream](const PDB::CodeView::DBI::Record* record) {
                if (record->header.kind == PDB::CodeView::DBI::SymbolRecordKind::S_LPROC32) {
                    const uint32_t rva = imageSectionStream.ConvertSectionOffsetToRVA(record->data.S_LPROC32.section,
                                                                                      record->data.S_LPROC32.offset);
                    string name = record->data.S_LPROC32.name;
                    if (name.find("lambda") != std::string::npos) {
                        funcMap->emplace(record->data.S_LPROC32.name, rva);
                    }
                }
            });
        }

        fastDlsymStat = true;
        dlsymLock.lock();
        auto handle = GetModuleHandle(nullptr);
        auto exportTblFn = GetProcAddress(handle, "?initializeLogging@DedicatedServer@@AEAAXXZ");
        void* symDbFn = nullptr;
        auto iter = funcMap->find(string("?initializeLogging@DedicatedServer@@AEAAXXZ"));
        if (iter != funcMap->end()) {
            symDbFn = (void*)(imageBaseAddr + iter->second);
        }
        dlsymLock.unlock();
        Info("Fast Dlsym Loaded <{}>", funcMap->size());
        fflush(stdout);
    }
}

void InitReverseLookup() {
    Info("Loading Reverse Lookup Table");
    rvaMap = new unordered_multimap<int, string*>(funcMap->size());
    dlsymLock.lock();
    for (auto& pair : *funcMap) {
        rvaMap->insert({pair.second, (string*)&pair.first});
    }
    dlsymLock.unlock();
}

void rawPdb() {
    const wchar_t* const pdbPath = LR"(./bedrock_server.pdb)";
    MemoryMappedFile::Handle pdbFile = MemoryMappedFile::Open(pdbPath);
    if (!pdbFile.baseAddress) {
        Error("bedrock_server.pdb not found");
        return;
    }
    if (IsError(PDB::ValidateFile(pdbFile.baseAddress))) {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::RawFile rawPdbFile = PDB::CreateRawFile(pdbFile.baseAddress);
    if (IsError(PDB::HasValidDBIStream(rawPdbFile))) {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::InfoStream infoStream(rawPdbFile);
    if (infoStream.UsesDebugFastLink()) {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::DBIStream dbiStream = PDB::CreateDBIStream(rawPdbFile);
    if (!HasValidDBIStreams(rawPdbFile, dbiStream)) {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    InitFastDlsym(rawPdbFile, dbiStream);
}

extern _declspec(dllexport) std::vector<string> dlsym_reverse(int addr) {
    if (!rvaMap)
        InitReverseLookup();
    // TODO: Fix Narrowing Conversion
    addr = addr - imageBaseAddr;
    auto const iter = rvaMap->equal_range(addr);
    std::vector<string> ret;
    for (auto it = iter.first; it != iter.second; ++it) {
        ret.push_back(*it->second);
    }
    return ret;
}

extern "C" _declspec(dllexport) void* dlsym_real(const char* x) {
    std::error_code ec;
    imageBaseAddr = (uintptr_t)GetModuleHandle(nullptr);
    static_assert(sizeof(HMODULE) == 8);
    if (fastDlsymStat == 0) {
        rawPdb();
    }
    for (; fastDlsymStat == 0;) {
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    if (fastDlsymStat == 1) {
        dlsymLock.lock();
        auto iter = funcMap->find(string(x));
        if (iter != funcMap->end()) {
            dlsymLock.unlock();
            return (void*)(imageBaseAddr + iter->second);
        } else {
            Error("Could not find function in memory: {}", x);
            Error("Plugin: {}", GetCallerModuleFileName());
        }
        dlsymLock.unlock();
    }
    return nullptr;
}

inline static void HookFunction_begin() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
}

inline static long HookFunction_finalize() {
    return DetourTransactionCommit();
}

static inline int realHook(void* oldFunc, void** pOutOld, void* newFunc) {
    void* target = oldFunc;
    HookFunction_begin();
    int rv = DetourAttach(&target, newFunc);
    HookFunction_finalize();
    *pOutOld = target;
    return rv;
}

extern "C" _declspec(dllexport) int HookFunction(void* oldFunc, void** pOutOld, void* newFunc) {
    static unordered_map<void*, void**> ptr_pori;
    auto it = ptr_pori.find(oldFunc);
    if (it == ptr_pori.end()) {
        int rv = realHook(oldFunc, pOutOld, newFunc);
        if (rv != 0)
            return rv;
        ptr_pori[oldFunc] = pOutOld;
        return 0;
    } else {
        *pOutOld = *it->second;
        *it->second = newFunc;
        return 0;
    }
}