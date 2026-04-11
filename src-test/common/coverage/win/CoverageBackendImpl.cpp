#include "coverage/win/CoverageBackendImpl.h"

#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"

#include "windows.h"

#include "DbgHelp.h"
#include "Psapi.h"

#ifndef SymTagFunction_
#define SymTagFunction_ 5
#endif

#include <algorithm>
#include <filesystem>

namespace ll::test::coverage {
namespace win {

AddressSampler* AddressSampler::sInstance = nullptr;

using namespace ll::utils::string_utils;

namespace {

std::wstring getSelfModuleFileName() {
    HMODULE hMod = nullptr;
    if (!GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&getSelfModuleFileName),
            &hMod
        )) {
        return {};
    }
    WCHAR path[MAX_PATH]{};
    GetModuleFileNameW(hMod, path, MAX_PATH);
    return std::wstring(path);
}

bool isInTextSection(uintptr_t base, uintptr_t address) {
    auto* dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
    auto* nt  = reinterpret_cast<IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    auto* sec = IMAGE_FIRST_SECTION(nt);
    for (WORD i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++sec) {
        if (sec->Characteristics & IMAGE_SCN_MEM_EXECUTE) {
            uintptr_t start = base + sec->VirtualAddress;
            uintptr_t end   = start + sec->Misc.VirtualSize;
            if (address >= start && address < end) return true;
        }
    }
    return false;
}

struct EnumSymbolsContext {
    HANDLE                     process{};
    std::vector<SymbolRecord>* out{};
};

BOOL CALLBACK enumSymbolsCallback(PSYMBOL_INFOW pSymInfo, ULONG, PVOID userContext) {
    if (pSymInfo->Tag != SymTagFunction_) return TRUE;
    auto* ctx = static_cast<EnumSymbolsContext*>(userContext);

    SymbolRecord record;
    record.name  = wstr2str(pSymInfo->Name);
    record.start = pSymInfo->Address;
    record.end   = record.start + std::max<ULONG>(pSymInfo->Size, 1);

    IMAGEHLP_LINEW64 line{};
    line.SizeOfStruct  = sizeof(line);
    DWORD displacement = 0;
    if (SymGetLineFromAddrW64(ctx->process, record.start, &displacement, &line)) {
        record.sourceFile  = wstr2str(line.FileName);
        record.startLine   = line.LineNumber;
        record.endLine     = line.LineNumber;
        record.hasLineInfo = true;
    }

    ctx->out->push_back(std::move(record));
    return TRUE;
}

struct EnumLinesContext {
    uintptr_t                      base{};
    std::vector<SourceLineRecord>* out{};
};

BOOL CALLBACK enumLinesCallback(PSRCCODEINFOW pLineInfo, PVOID userContext) {
    auto* ctx = static_cast<EnumLinesContext*>(userContext);
    if (!pLineInfo->Address) return TRUE;
    if (!isInTextSection(ctx->base, pLineInfo->Address)) return TRUE;

    ctx->out->push_back(
        SourceLineRecord{
            .file    = wstr2str(pLineInfo->FileName),
            .line    = pLineInfo->LineNumber,
            .address = pLineInfo->Address,
        }
    );
    return TRUE;
}

} // namespace


std::vector<DiscoveredModule> ModuleEnumerator::enumerateModules(std::string_view) {
    std::vector<DiscoveredModule> result;
    HANDLE                        hProcess = GetCurrentProcess();

    if (EnumerateLoadedModulesW64(
            hProcess,
            [](PCWSTR name, DWORD64 base, ULONG size, PVOID user) -> BOOL {
                auto*        modules = static_cast<std::vector<DiscoveredModule>*>(user);
                std::wstring modulePathW{name};
                auto         modulePath = wstr2str(modulePathW);
                modules->push_back(
                    DiscoveredModule{
                        .moduleName      = std::filesystem::path(modulePath).filename().string(),
                        .modulePath      = modulePath,
                        .baseAddress     = static_cast<uintptr_t>(base),
                        .imageSize       = size,
                        .hasDebugSymbols = false,
                    }
                );
                return TRUE;
            },
            &result
        )) {
        return result;
    }

    std::vector<HMODULE> mods(1024);
    DWORD                needed = 0;
    if (!EnumProcessModules(hProcess, mods.data(), static_cast<DWORD>(mods.size() * sizeof(HMODULE)), &needed)) {
        return result;
    }

    auto count = needed / sizeof(HMODULE);
    result.reserve(count);
    for (DWORD i = 0; i < count; ++i) {
        WCHAR path[MAX_PATH]{};
        if (!GetModuleFileNameExW(hProcess, mods[i], path, MAX_PATH)) {
            continue;
        }
        MODULEINFO moduleInfo{};
        if (!GetModuleInformation(hProcess, mods[i], &moduleInfo, sizeof(moduleInfo))) {
            continue;
        }
        auto modulePath = wstr2str(path);
        result.push_back(
            DiscoveredModule{
                .moduleName      = std::filesystem::path(modulePath).filename().string(),
                .modulePath      = modulePath,
                .baseAddress     = reinterpret_cast<uintptr_t>(moduleInfo.lpBaseOfDll),
                .imageSize       = moduleInfo.SizeOfImage,
                .hasDebugSymbols = false,
            }
        );
    }
    return result;
}

bool SymbolProvider::prepareModule(DiscoveredModule& module) {
    HANDLE hProcess   = GetCurrentProcess();
    auto   modulePath = str2wstr(module.modulePath);

    DWORD64 loadedBase = SymLoadModuleExW(
        hProcess,
        nullptr,
        modulePath.c_str(),
        nullptr,
        module.baseAddress,
        static_cast<DWORD>(module.imageSize),
        nullptr,
        0
    );
    if (!loadedBase) {
        loadedBase = module.baseAddress;
    }

    IMAGEHLP_MODULEW64 modInfo{};
    modInfo.SizeOfStruct = sizeof(modInfo);
    module.hasDebugSymbols =
        SymGetModuleInfoW64(hProcess, loadedBase, &modInfo) && (modInfo.SymType == SymPdb || modInfo.SymType == SymDia);
    return true;
}

std::vector<SymbolRecord> SymbolProvider::enumerateFunctions(DiscoveredModule const& module) {
    std::vector<SymbolRecord> out;
    HANDLE                    hProcess = GetCurrentProcess();
    EnumSymbolsContext        ctx{hProcess, &out};
    SymEnumSymbolsW(hProcess, module.baseAddress, L"*!*", enumSymbolsCallback, &ctx);
    return out;
}

std::vector<SourceLineRecord> SymbolProvider::enumerateLines(DiscoveredModule const& module) {
    std::vector<SourceLineRecord> out;
    HANDLE                        hProcess = GetCurrentProcess();
    EnumLinesContext              ctx{module.baseAddress, &out};
    SymEnumLinesW(hProcess, module.baseAddress, nullptr, nullptr, enumLinesCallback, &ctx);
    return out;
}

std::unordered_set<uintptr_t> ExportEnumerator::collectExportedAddresses(DiscoveredModule const& module) {
    std::unordered_set<uintptr_t> out;

    auto* dos = reinterpret_cast<IMAGE_DOS_HEADER*>(module.baseAddress);
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) return out;
    auto* nt = reinterpret_cast<IMAGE_NT_HEADERS*>(module.baseAddress + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE) return out;

    auto dirRva = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
    auto dirSz  = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size;
    if (!dirRva || !dirSz) return out;

    auto* exp   = reinterpret_cast<IMAGE_EXPORT_DIRECTORY*>(module.baseAddress + dirRva);
    auto* funcs = reinterpret_cast<DWORD*>(module.baseAddress + exp->AddressOfFunctions);
    auto* ords  = reinterpret_cast<WORD*>(module.baseAddress + exp->AddressOfNameOrdinals);

    for (DWORD i = 0; i < exp->NumberOfNames; ++i) {
        WORD  ord = ords[i];
        DWORD rva = funcs[ord];
        if (rva >= dirRva && rva < dirRva + dirSz) continue;
        uintptr_t addr = module.baseAddress + rva;
        if (isInTextSection(module.baseAddress, addr)) {
            out.insert(addr);
        }
    }

    for (DWORD i = 0; i < exp->NumberOfFunctions; ++i) {
        DWORD rva = funcs[i];
        if (rva == 0) continue;
        if (rva >= dirRva && rva < dirRva + dirSz) continue;
        bool hasName = false;
        for (DWORD j = 0; j < exp->NumberOfNames; ++j) {
            if (ords[j] == i) {
                hasName = true;
                break;
            }
        }
        if (!hasName) {
            uintptr_t addr = module.baseAddress + rva;
            if (isInTextSection(module.baseAddress, addr)) {
                out.insert(addr);
            }
        }
    }

    return out;
}

AddressSampler::~AddressSampler() { stop(); }

bool AddressSampler::addModule(
    uintptr_t                  baseAddress,
    size_t                     imageSize,
    std::span<uintptr_t const> instrumentedAddresses
) {
    if (mRunning) {
        return false;
    }

    auto& module = mRuntimes.emplace_back();
    module.base  = baseAddress;
    module.size  = imageSize;
    module.addrs.assign(instrumentedAddresses.begin(), instrumentedAddresses.end());
    module.origBytes.resize(module.addrs.size(), 0);
    module.addressHits.assign(module.addrs.size(), 0);
    return true;
}

size_t AddressSampler::moduleCount() const { return mRuntimes.size(); }

std::span<uint8_t const> AddressSampler::addressHits(size_t moduleIndex) const {
    return mRuntimes[moduleIndex].addressHits;
}

bool AddressSampler::isRunning() const { return mRunning; }

void AddressSampler::installBreakpoints() {
    ll::thread::GlobalThreadPauser pauser;
    for (auto& mr : mRuntimes) {
        if (mr.addrs.empty()) continue;
        for (size_t i = 0; i < mr.addrs.size(); ++i) {
            uintptr_t                addr = mr.addrs[i];
            MEMORY_BASIC_INFORMATION mbi{};
            if (!VirtualQuery(reinterpret_cast<void*>(addr), &mbi, sizeof(mbi))) continue;
            uintptr_t pageBase = reinterpret_cast<uintptr_t>(mbi.BaseAddress);
            size_t    pageSize = mbi.RegionSize;
            bool      already  = false;
            for (auto& p : mr.modifiedPages) {
                if (p.base == pageBase) {
                    already = true;
                    break;
                }
            }
            if (!already) {
                DWORD oldProtect{};
                if (VirtualProtect(reinterpret_cast<void*>(pageBase), pageSize, PAGE_EXECUTE_READWRITE, &oldProtect)) {
                    mr.modifiedPages.push_back({pageBase, pageSize, oldProtect});
                }
            }
            mr.origBytes[i]                   = *reinterpret_cast<uint8_t*>(addr);
            *reinterpret_cast<uint8_t*>(addr) = 0xCC;
        }
    }
    FlushInstructionCache(GetCurrentProcess(), nullptr, 0);
}

void AddressSampler::removeBreakpoints() {
    ll::thread::GlobalThreadPauser pauser;
    for (auto& mr : mRuntimes) {
        for (size_t i = 0; i < mr.addrs.size(); ++i) {
            uintptr_t addr                    = mr.addrs[i];
            *reinterpret_cast<uint8_t*>(addr) = mr.origBytes[i];
        }
        for (auto& p : mr.modifiedPages) {
            DWORD dummy{};
            VirtualProtect(reinterpret_cast<void*>(p.base), p.size, p.oldProtect, &dummy);
        }
        mr.modifiedPages.clear();
    }
    FlushInstructionCache(GetCurrentProcess(), nullptr, 0);
}

bool AddressSampler::start() {
    if (mRunning || sInstance) return false;
    mVehHandle = AddVectoredExceptionHandler(1, vehHandler);
    if (!mVehHandle) {
        return false;
    }
    sInstance = this;
    installBreakpoints();
    mRunning = true;
    return true;
}

void AddressSampler::stop() {
    if (!mRunning) return;
    removeBreakpoints();
    if (mVehHandle) {
        RemoveVectoredExceptionHandler(mVehHandle);
        mVehHandle = nullptr;
    }
    sInstance = nullptr;
    mRunning  = false;
}

LONG NTAPI AddressSampler::vehHandler(EXCEPTION_POINTERS* ep) {
    if (ep->ExceptionRecord->ExceptionCode != EXCEPTION_BREAKPOINT) {
        return EXCEPTION_CONTINUE_SEARCH;
    }
    if (!sInstance) return EXCEPTION_CONTINUE_SEARCH;

    uintptr_t candidates[2] = {
        reinterpret_cast<uintptr_t>(ep->ExceptionRecord->ExceptionAddress),
        ep->ContextRecord->Rip > 0 ? ep->ContextRecord->Rip - 1 : 0
    };

    for (uintptr_t addr : candidates) {
        if (addr == 0) continue;
        for (auto& mr : sInstance->mRuntimes) {
            if (addr < mr.base || addr >= mr.base + mr.size) continue;
            auto it = std::lower_bound(mr.addrs.begin(), mr.addrs.end(), addr);
            if (it != mr.addrs.end() && *it == addr) {
                size_t   idx = static_cast<size_t>(it - mr.addrs.begin());
                uint8_t* ptr = reinterpret_cast<uint8_t*>(addr);

                if (*ptr == 0xCC) {
                    *ptr = mr.origBytes[idx];
                }

                std::atomic_ref<uint8_t>(mr.addressHits[idx]).store(1, std::memory_order_relaxed);

                ep->ContextRecord->Rip = addr;
                return EXCEPTION_CONTINUE_EXECUTION;
            }
        }
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

} // namespace win

std::unique_ptr<IModuleEnumerator> IModuleEnumerator::createDefault() {
    return std::make_unique<win::ModuleEnumerator>();
}

std::unique_ptr<ISymbolProvider> ISymbolProvider::createDefault() { return std::make_unique<win::SymbolProvider>(); }

std::unique_ptr<IExportEnumerator> IExportEnumerator::createDefault() {
    return std::make_unique<win::ExportEnumerator>();
}

std::unique_ptr<IAddressSampler> IAddressSampler::createDefault() { return std::make_unique<win::AddressSampler>(); }

} // namespace ll::test::coverage