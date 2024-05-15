#include "ll/api/utils/StacktraceUtils.h"
#if _HAS_CXX23
#include <mutex>

#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"

#include "fmt/format.h"
#include "windows.h"

#include "DbgHelp.h"
#pragma comment(lib, "DbgHelp.lib")

#include "DbgEng.h"

namespace ll::inline utils::stacktrace_utils {
namespace detail {
static void lockRelease() noexcept;

class [[nodiscard]] DbgEngData {
public:
    // NOLINTBEGIN(readability-convert-member-functions-to-static)
    DbgEngData() noexcept { AcquireSRWLockExclusive(&srw); }

    ~DbgEngData() { ReleaseSRWLockExclusive(&srw); }

    DbgEngData(const DbgEngData&)            = delete;
    DbgEngData& operator=(const DbgEngData&) = delete;

    void release() noexcept {
        // "Phoenix singleton" - destroy and set to null, so that it can be initialized later again

        if (debugClient != nullptr) {
            if (attached) {
                (void)debugClient->DetachProcesses();
                attached = false;
            }

            debugClient->Release();
            debugClient = nullptr;
        }

        if (debugControl != nullptr) {
            debugControl->Release();
            debugControl = nullptr;
        }

        if (debugSymbols != nullptr) {
            debugSymbols->Release();
            debugSymbols = nullptr;
        }

        if (dbgEng != nullptr) {
            (void)FreeLibrary(dbgEng);
            dbgEng = nullptr;
        }

        initializeAttempted = false;
    }

    [[nodiscard]] bool tryInit() noexcept {
        if (!initializeAttempted) {
            initializeAttempted = true;

            if (std::atexit(lockRelease) != 0) {
                return false;
            }

            dbgEng = LoadLibraryExW(L"dbgeng.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);

            if (dbgEng != nullptr) {
                const auto debug_create =
                    reinterpret_cast<decltype(&DebugCreate)>(GetProcAddress(dbgEng, "DebugCreate"));

                // Deliberately not calling CoInitialize[Ex]. DbgEng.h API works fine without it.
                // COM initialization may have undesired interference with user's code.
                if (debug_create != nullptr
                    && SUCCEEDED(debug_create(IID_IDebugClient, reinterpret_cast<void**>(&debugClient)))
                    && SUCCEEDED(
                        debugClient->QueryInterface(IID_IDebugSymbols3, reinterpret_cast<void**>(&debugSymbols))
                    )
                    && SUCCEEDED(debugClient->QueryInterface(IID_IDebugControl, reinterpret_cast<void**>(&debugControl))
                    )) {
                    attached = SUCCEEDED(debugClient->AttachProcess(
                        0,
                        GetCurrentProcessId(),
                        DEBUG_ATTACH_NONINVASIVE | DEBUG_ATTACH_NONINVASIVE_NO_SUSPEND
                    ));
                    if (attached) {
                        (void)debugControl->WaitForEvent(0, INFINITE);
                    }
                    (void
                    )debugSymbols->AppendSymbolPathWide(win_utils::getModulePath(nullptr).value().parent_path().c_str()
                    );
                    (void)debugSymbols->RemoveSymbolOptions(
                        SYMOPT_NO_CPP | SYMOPT_LOAD_ANYTHING | SYMOPT_NO_UNQUALIFIED_LOADS | SYMOPT_IGNORE_NT_SYMPATH
                        | SYMOPT_PUBLICS_ONLY | SYMOPT_NO_PUBLICS | SYMOPT_NO_IMAGE_SEARCH
                    );
                    (void)debugSymbols->AddSymbolOptions(
                        SYMOPT_CASE_INSENSITIVE | SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES
                        | SYMOPT_OMAP_FIND_NEAREST | SYMOPT_EXACT_SYMBOLS | SYMOPT_FAIL_CRITICAL_ERRORS
                        | SYMOPT_AUTO_PUBLICS | SYMOPT_NO_PROMPTS
                    );
                }
            }
        }
        return attached;
    }

    StackTraceEntryInfo getInfo(const void* const address) {
        std::optional<size_t> displacement = 0;
        std::string           name;
        std::optional<ulong>  line = 0;
        std::string           file;
        if (ulong bufSize;
            S_OK == debugSymbols->GetNameByOffset((uintptr_t)(address), nullptr, 0, &bufSize, &*displacement)) {
            std::string buf(bufSize - 1, '\0');
            if (S_OK == debugSymbols->GetNameByOffset((uintptr_t)(address), buf.data(), bufSize, nullptr, nullptr)) {
                name = std::move(buf);
            }
        } else {
            displacement = std::nullopt;
        }
        if (ulong bufSize;
            S_OK == debugSymbols->GetLineByOffset((uintptr_t)(address), &*line, nullptr, 0, &bufSize, nullptr)) {
            std::string buf(bufSize - 1, '\0');
            if (S_OK
                == debugSymbols
                       ->GetLineByOffset((uintptr_t)(address), nullptr, buf.data(), bufSize, nullptr, nullptr)) {
                file = std::move(buf);
            }
        } else {
            line = std::nullopt;
        }
        return {displacement, name, line, file};
    }

    uintptr_t getSymbol(std::string_view sv) {
        if (uintptr_t res{}; S_OK == debugSymbols->GetOffsetByName(sv.data(), &res)) {
            return res;
        }
        return 0;
    }
    // NOLINTEND(readability-convert-member-functions-to-static)
private:
    inline static SRWLOCK         srw                 = SRWLOCK_INIT;
    inline static IDebugClient*   debugClient         = nullptr;
    inline static IDebugSymbols3* debugSymbols        = nullptr;
    inline static IDebugControl*  debugControl        = nullptr;
    inline static bool            attached            = false;
    inline static bool            initializeAttempted = false;
    inline static HMODULE         dbgEng              = nullptr;
};

void lockRelease() noexcept {
    DbgEngData data;

    data.release();
}
} // namespace detail
using namespace detail;


std::atomic_ullong SymbolLoader::count{};

SymbolLoader::SymbolLoader() : handle(GetCurrentProcess()) {
    if (count > 0) {
        return;
    }
    if (!SymInitializeW(handle, nullptr, true)) {
        throw error_utils::getWinLastError();
    }
    count++;
    DWORD options  = SymGetOptions();
    options       |= SYMOPT_LOAD_LINES | SYMOPT_EXACT_SYMBOLS;
    SymSetOptions(options);
}
SymbolLoader::SymbolLoader(std::string_view extra) : handle(GetCurrentProcess()) {
    if (count > 0) {
        return;
    }
    if (!SymInitializeW(handle, string_utils::str2wstr(extra).c_str(), true)) {
        throw error_utils::getWinLastError();
    }
    count++;
    DWORD options  = SymGetOptions();
    options       |= SYMOPT_LOAD_LINES | SYMOPT_EXACT_SYMBOLS;
    SymSetOptions(options);
}
SymbolLoader::~SymbolLoader() {
    if (--count == 0) {
        SymCleanup(handle);
    }
}

uintptr_t tryGetSymbolAddress(std::string_view symbol) {
    DbgEngData data;
    if (!data.tryInit()) {
        return 0;
    }
    return data.getSymbol(symbol);
}

StackTraceEntryInfo getInfo(std::stacktrace_entry const& entry) {
    DbgEngData data;
    if (!data.tryInit()) {
        return {};
    }
    return data.getInfo(entry.native_handle());
}

std::string toString(std::stacktrace_entry const& entry) {
    std::string res = fmt::format("at: 0x{:0>12X}", (uint64)entry.native_handle());
    DbgEngData  data;
    if (!data.tryInit()) {
        return res;
    }

    auto [displacement, name, line, file] = data.getInfo(entry.native_handle());
    std::string module;
    std::string function;
    if (auto pos = name.find('!'); pos != std::string_view::npos) {
        function = name.substr(1 + pos);
        module   = name.substr(0, pos);
    } else {
        module = name;
    }
    if (!module.empty()) res += fmt::format(" {}", module);
    if (!function.empty()) res += fmt::format(" -> {}", function);
    if (displacement) res += fmt::format(" + 0x{:X}", *displacement);
    if (!file.empty()) {
        file = string_utils::u8str2str(file_utils::u8path(file).filename().u8string());
        if (line) {
            res += fmt::format(" [{}:{}L]", file, *line);
        } else {
            res += fmt::format(" [{}]", file);
        }
    }
    return res;
}

std::string toString(std::stacktrace const& t) {
    std::string res;
    auto        maxsize = std::to_string(t.size() - 1).size();
    for (size_t i = 0; i < t.size(); i++) {
        res += fmt::format("{1:>{0}}> {2}\n", maxsize, i, toString(t[i]));
    }
    if (res.ends_with('\n')) {
        res.pop_back();
    }
    return res;
}
std::string toString(_CONTEXT const& c) {
    return fmt::format("RAX: 0x{:016X}  RBX: 0x{:016X}  RCX: 0x{:016X}\n", c.Rax, c.Rbx, c.Rcx)
         + fmt::format("RDX: 0x{:016X}  RSI: 0x{:016X}  RDI: 0x{:016X}\n", c.Rdx, c.Rsi, c.Rdi)
         + fmt::format("RBP: 0x{:016X}  RSP: 0x{:016X}  R8:  0x{:016X}\n", c.Rbp, c.Rsp, c.R8)
         + fmt::format("R9:  0x{:016X}  R10: 0x{:016X}  R11: 0x{:016X}\n", c.R9, c.R10, c.R11)
         + fmt::format("R12: 0x{:016X}  R13: 0x{:016X}  R14: 0x{:016X}\n", c.R12, c.R13, c.R14)
         + fmt::format("R15: 0x{:016X}\n", c.R15) + fmt::format("RIP: 0x{:016X}  EFLAGS: 0x{:08X}\n", c.Rip, c.EFlags)
         + fmt::format("DR0: 0x{:016X}  DR1: 0x{:016X}  DR2: 0x{:016X}\n", c.Dr0, c.Dr1, c.Dr2)
         + fmt::format("DR3: 0x{:016X}  DR6: 0x{:016X}  DR7: 0x{:016X}\n", c.Dr3, c.Dr6, c.Dr7)
         + fmt::format(
               "CS:  0x{:04X}  DS: 0x{:04X}  ES:  0x{:04X}  FS: 0x{:04X}  GS:  0x{:04X}  SS: 0x{:04X}",
               c.SegCs,
               c.SegDs,
               c.SegEs,
               c.SegFs,
               c.SegGs,
               c.SegSs
         );
}
} // namespace ll::inline utils::stacktrace_utils

#endif
