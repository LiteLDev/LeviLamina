#include "pch.h"
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <list>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <vector>
#include <Windows.h>
#include "../LiteLoader/Header/Utils/Hash.h"
#include "../LiteLoader/Header/third-party/detours/detours.h"
#include "../LiteLoader/Header/third-party/rawpdb/PDB.h"
#include "../LiteLoader/Header/third-party/rawpdb/PDB_RawFile.h"
#include "../LiteLoader/Header/third-party/rawpdb/PDB_InfoStream.h"
#include "../LiteLoader/Header/third-party/rawpdb/PDB_DBIStream.h"
#include "../LiteLoader/Header/third-party/rawpdb/Foundation/PDB_DisableWarningsPop.h"
#include "Logger.h"

using std::list;
using std::string, std::string_view;
using std::unordered_map, std::vector;
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
struct SymDBBase {
    // constexpr static int SEGMENT_MAX = 8;
    constexpr static int SEGMENT_HASH_ORDERED = 0;
    constexpr static int SEGMENT_RVA_INT      = 1;
    constexpr static int SEGMENT_STRINGS_IDX  = 2;
    constexpr static int SEGMENT_STRINGS      = 3;
    constexpr static int SEGMENT_COUNT        = 4;
};

typedef int s32;
typedef int64_t s64;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
template <int BKDR_MUL = 131, int BKDR_ADD = 0>
constexpr u64 BKDRHash(const char *x, int len) {
    u64 rval = 0;
    for (size_t i = 0; i < len; ++i) {
        rval *= BKDR_MUL;
        rval += x[i];
        rval += BKDR_ADD;
    }
    return rval;
}

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

int fnstat = 0;
static uintptr_t BaseAdr;
unordered_map<string, int, aphash>* FuncMap;
void InitFastDlsym(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream);

void rawPdb()
{
    const wchar_t* const pdbPath = LR"(./bedrock_server.pdb)";
    MemoryMappedFile::Handle pdbFile = MemoryMappedFile::Open(pdbPath);
    if (!pdbFile.baseAddress)
    {
        Error("bedrock_server.pdb Not found");
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

CRITICAL_SECTION dlsymLock;

void InitFastDlsym(const PDB::RawFile& rawPdbFile, const PDB::DBIStream& dbiStream)
{
    Info("[SymBol] Loading bedrock_server.pdb symbols...");
    InitializeCriticalSection(&dlsymLock);
    FuncMap = new unordered_map<string, int, aphash>;
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
            if (rva == 0u)
            {
                continue;
            }
            FuncMap->emplace(record->data.S_PUB32.name, rva);
        }	
        fnstat = 1;
        EnterCriticalSection(&dlsymLock);
        void* exportTableFn = GetProcAddress(GetModuleHandle(nullptr), "?initializeLogging@DedicatedServer@@AEAAXXZ");
        void* symdbFn = 0;
        auto iter = FuncMap->find(string("?initializeLogging@DedicatedServer@@AEAAXXZ"));
        if (iter != FuncMap->end())
        {
            symdbFn = (void*)(BaseAdr + iter->second);
        }
        LeaveCriticalSection(&dlsymLock);
        Info("[SymBol] FastDlsymInited <{}>", FuncMap->size());
        fflush(stdout);
    }
}


extern "C" _declspec(dllexport) void* dlsym_real(const char* x) {
    std::error_code ec;
    BaseAdr = (uintptr_t)GetModuleHandle(NULL);
    static_assert(sizeof(GetModuleHandle(NULL)) == 8);
    if (fnstat == 0) {
        rawPdb();
    }
    for (; fnstat == 0;) {
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    if (fnstat == 1) {
        EnterCriticalSection(&dlsymLock);
        auto iter = FuncMap->find(string(x));
        if (iter != FuncMap->end()) {
            LeaveCriticalSection(&dlsymLock);
            return (void *)(BaseAdr + iter->second);
        } else {
            Error("Could not find function in memory: {}", x);
        }
        LeaveCriticalSection(&dlsymLock);
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