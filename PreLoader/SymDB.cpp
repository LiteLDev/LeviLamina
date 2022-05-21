#include "pch.h"
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <list>
#include <string_view>
#include <thread>
#include <unordered_map>

#include <vector>
#include <mutex>
#include <Windows.h>
#include "../LiteLoader/Header/Utils/Hash.h"
#include "../LiteLoader/Header/third-party/detours/detours.h"
#include "../LiteLoader/Lib/third-party/rawpdb/PDB.h"
#include "../LiteLoader/Lib/third-party/rawpdb/PDB_RawFile.h"
#include "../LiteLoader/Lib/third-party/rawpdb/PDB_InfoStream.h"
#include "../LiteLoader/Lib/third-party/rawpdb/PDB_DBIStream.h"
#include "../LiteLoader/Lib/third-party/rawpdb/Foundation/PDB_DisableWarningsPop.h"

#include "../LiteLoader/Header/third-party/parallel_hashmap/phmap.h"

#include "Logger.h"
#include "../LiteLoader/Header/third-party/FMT/printf.h"
#include <iomanip>
#include "Utils.h"

using std::list;
using std::string, std::string_view;
using std::unordered_map, std::unordered_multimap, std::vector;
struct aphash {
    size_t operator()(const string &x) const {
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

namespace MemoryMappedFile
{
struct Handle
{
    HANDLE file;
    HANDLE fileMapping;
    void* baseAddress;
};
	
MemoryMappedFile::Handle Open(const wchar_t* path)
{
    HANDLE file = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr);
    if (file == INVALID_HANDLE_VALUE)
    {
        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    HANDLE fileMapping = CreateFileMappingW(file, nullptr, PAGE_READONLY, 0, 0, nullptr);
    if (fileMapping == nullptr)
    {
        CloseHandle(file);

        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    void* baseAddress = MapViewOfFile(fileMapping, FILE_MAP_READ, 0, 0, 0);
    if (baseAddress == nullptr)
    {
        CloseHandle(fileMapping);
        CloseHandle(file);

        return Handle{INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, nullptr};
    }

    return Handle{file, fileMapping, baseAddress};
}


void Close(Handle& handle)
{
    UnmapViewOfFile(handle.baseAddress);
    CloseHandle(handle.fileMapping);
    CloseHandle(handle.file);

    handle.file = nullptr;
    handle.fileMapping = nullptr;
    handle.baseAddress = nullptr;
}
} // namespace MemoryMappedFile
namespace
{
PDB_NO_DISCARD static bool IsError(PDB::ErrorCode errorCode)
{
    switch (errorCode)
    {
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

PDB_NO_DISCARD static bool HasValidDBIStreams(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream)
{
    if (IsError(dbiStream.HasValidImageSectionStream(rawPdbFile))) return false;
    if (IsError(dbiStream.HasValidPublicSymbolStream(rawPdbFile)))return false;
    if (IsError(dbiStream.HasValidGlobalSymbolStream(rawPdbFile))) return false;
    if (IsError(dbiStream.HasValidSectionContributionStream(rawPdbFile))) return false;
    return true;
}
} // namespace

bool fastDlsymStat = 0;
static uintptr_t imageBaseAddr;

std::mutex dlsymLock;
phmap::flat_hash_map<string, int, aphash>* funcMap;
unordered_multimap<int, string*>* rvaMap;

void InitFastDlsym(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream)
{
    Info("[Symbol] Loading symbols from pdb...");
    funcMap = new phmap::flat_hash_map<string, int, aphash>;
    const PDB::ImageSectionStream imageSectionStream = dbiStream.CreateImageSectionStream(rawPdbFile);
    const PDB::CoalescedMSFStream symbolRecordStream = dbiStream.CreateSymbolRecordStream(rawPdbFile);
    const PDB::PublicSymbolStream publicSymbolStream = dbiStream.CreatePublicSymbolStream(rawPdbFile);
    {
        const PDB::ArrayView<PDB::HashRecord> hashRecords = publicSymbolStream.GetRecords();
        const size_t count = hashRecords.GetLength();

        for (const PDB::HashRecord& hashRecord : hashRecords)
        {
            const PDB::CodeView::DBI::Record* record = publicSymbolStream.GetRecord(symbolRecordStream, hashRecord);
            const uint32_t rva = imageSectionStream.ConvertSectionOffsetToRVA(record->data.S_PUB32.section, record->data.S_PUB32.offset);
            if (rva == 0u) continue;
            funcMap->emplace(record->data.S_PUB32.name, rva);
        }
        const PDB::ModuleInfoStream moduleInfoStream = dbiStream.CreateModuleInfoStream(rawPdbFile);
        const PDB::ArrayView<PDB::ModuleInfoStream::Module> modules = moduleInfoStream.GetModules();
        for (const PDB::ModuleInfoStream::Module& module : modules)
        {
            if (!module.HasSymbolStream()) continue;
            const PDB::ModuleSymbolStream moduleSymbolStream = module.CreateSymbolStream(rawPdbFile);
            moduleSymbolStream.ForEachSymbol([&imageSectionStream](const PDB::CodeView::DBI::Record* record) {
                if (record->header.kind == PDB::CodeView::DBI::SymbolRecordKind::S_LPROC32)
                {
                    const uint32_t rva = imageSectionStream.ConvertSectionOffsetToRVA(record->data.S_LPROC32.section, record->data.S_LPROC32.offset);
                    string name = record->data.S_LPROC32.name;
                    if (name.find("lambda") != name.npos) {
                        funcMap->emplace(record->data.S_LPROC32.name, rva);
                   }
                }
            });
        }

		/*std::ofstream os;
        os.open("SymList.txt");
        string str; 
        for (auto iter = funcMap->begin(); funcMap->end() != iter; iter++)
        {
            str += fmt::sprintf("[%08d] %s\n",iter->second,iter->first);
        }
        os << str;
        os.close();*/
		
        fastDlsymStat = 1;
        dlsymLock.lock();
        void* exportTableFn = GetProcAddress(GetModuleHandle(nullptr), "?initializeLogging@DedicatedServer@@AEAAXXZ");
        void* symdbFn = 0;
        auto iter = funcMap->find(string("?initializeLogging@DedicatedServer@@AEAAXXZ"));
        if (iter != funcMap->end())
        {
            symdbFn = (void*)(imageBaseAddr + iter->second);
        }
        dlsymLock.unlock();
        Info("[Symbol] Fast Dlsym Loaded <{}>", funcMap->size());
        fflush(stdout);
    }
}
void InitReverseLookup()
{
    Info("[Symbol] Loading Reverse Lookup Table");
    rvaMap = new unordered_multimap<int, string*>(funcMap->size());
    dlsymLock.lock();
	for (auto& pair : *funcMap)
	{
        rvaMap->insert({pair.second, (string*)&pair.first});
	}
    dlsymLock.unlock();	
}

void rawPdb()
{
    const wchar_t* const pdbPath = LR"(./bedrock_server.pdb)";
    MemoryMappedFile::Handle pdbFile = MemoryMappedFile::Open(pdbPath);
    if (!pdbFile.baseAddress)
    {
        Error("bedrock_server.pdb not found");
        return;
    }
    if (IsError(PDB::ValidateFile(pdbFile.baseAddress)))
    {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::RawFile rawPdbFile = PDB::CreateRawFile(pdbFile.baseAddress);
    if (IsError(PDB::HasValidDBIStream(rawPdbFile)))
    {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::InfoStream infoStream(rawPdbFile);
    if (infoStream.UsesDebugFastLink())
    {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    const PDB::DBIStream dbiStream = PDB::CreateDBIStream(rawPdbFile);
    if (!HasValidDBIStreams(rawPdbFile, dbiStream))
    {
        MemoryMappedFile::Close(pdbFile);
        return;
    }
    InitFastDlsym(rawPdbFile, dbiStream);
}

extern _declspec(dllexport) std::vector<string> dlsym_reverse(int addr)
{
    if (!rvaMap)
        InitReverseLookup();
	addr = addr - imageBaseAddr;
    auto const iter = rvaMap->equal_range(addr);
    std::vector<string> ret;
	for (auto it = iter.first; it != iter.second; ++it)
	{
		ret.push_back(*it->second);
	}
	return ret;
}

extern "C" _declspec(dllexport) void* dlsym_real(const char* x) {
    std::error_code ec;
    imageBaseAddr = (uintptr_t)GetModuleHandle(NULL);
    static_assert(sizeof(GetModuleHandle(NULL)) == 8);
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
            return (void *)(imageBaseAddr + iter->second);
        } else {
            Error("Could not find function in memory: {}", x);
            Error("Plugin: {}", GetCallerModuleFileName());
        }
        dlsymLock.unlock();
    }
    return nullptr;
}
inline static void HookFunction__begin() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
}
inline static long HookFunction__finalize() {
    return DetourTransactionCommit();
}
static inline int realHook(void *oldfunc, void **poutold, void *newfunc) {
    void *target = oldfunc;
    HookFunction__begin();
    int rv = DetourAttach(&target, newfunc);
    HookFunction__finalize();
    *poutold = target;
    return rv;
}
extern "C" _declspec(dllexport) int HookFunction(void* oldfunc, void** poutold, void* newfunc) {
    static unordered_map<void *, void **> ptr_pori;
    auto it = ptr_pori.find(oldfunc);
    if (it == ptr_pori.end()) {
        int rv = realHook(oldfunc, poutold, newfunc);
        if (rv != 0)
            return rv;
        ptr_pori[oldfunc] = poutold;
        return 0;
    } else {
        *poutold    = *it->second;
        *it->second = newfunc;
        return 0;
    }
}