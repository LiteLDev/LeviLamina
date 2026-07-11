#include "ll/api/utils/StacktraceUtils.h"

#include <cstddef>
#include <mutex>

#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"

#include "pl/SymbolProvider.h"

#include "fmt/format.h"
#include "windows.h"

#include "DbgHelp.h"
#include "psapi.h"

#include <stacktrace>

namespace ll {
LLNDAPI Stacktrace Stacktrace::current(size_t skip, size_t maxDepth) {
    auto       s = std::stacktrace::current(skip + 1, maxDepth);
    Stacktrace res;
    res.entries.reserve(s.size());
    for (auto& entry : s) {
        res.entries.emplace_back(entry.native_handle());
    }
    res.hash = std::hash<std::stacktrace>{}(s);
    return res;
}
} // namespace ll

namespace ll::inline utils::stacktrace_utils {
namespace detail {
class DbgHelpProcessHandle {
public:
    DbgHelpProcessHandle() noexcept {
        if (!DuplicateHandle(
                GetCurrentProcess(),
                GetCurrentProcess(),
                GetCurrentProcess(),
                &handle,
                0,
                false,
                DUPLICATE_SAME_ACCESS
            )) {
            error = GetLastError();
        }
    }

    ~DbgHelpProcessHandle() {
        if (handle != nullptr) {
            CloseHandle(handle);
        }
    }

    DbgHelpProcessHandle(DbgHelpProcessHandle const&)            = delete;
    DbgHelpProcessHandle& operator=(DbgHelpProcessHandle const&) = delete;

    [[nodiscard]] HANDLE get() const noexcept { return handle; }
    [[nodiscard]] DWORD  getError() const noexcept { return error; }

    [[nodiscard]] operator HANDLE() const noexcept { return handle; }

private:
    HANDLE handle{};
    DWORD  error{ERROR_SUCCESS};
};

struct DbgHelpState {
    inline static SRWLOCK             srw = SRWLOCK_INIT;
    // DbgHelp uses the handle value as its session key. A duplicated process handle is unique and remains valid for
    // fInvadeProcess, preserving eager module loading without sharing another component's symbol session.
    inline static DbgHelpProcessHandle handle{};
    inline static size_t               refCount = 0;
};

class [[nodiscard]] DbgHelpLock {
public:
    DbgHelpLock() noexcept { AcquireSRWLockExclusive(&DbgHelpState::srw); }

    ~DbgHelpLock() { ReleaseSRWLockExclusive(&DbgHelpState::srw); }

    DbgHelpLock(DbgHelpLock const&)            = delete;
    DbgHelpLock& operator=(DbgHelpLock const&) = delete;
};

void configureSymbols() noexcept {
    auto options = SymGetOptions();
    options &= ~(SYMOPT_NO_CPP | SYMOPT_LOAD_ANYTHING | SYMOPT_NO_UNQUALIFIED_LOADS | SYMOPT_IGNORE_NT_SYMPATH
               | SYMOPT_PUBLICS_ONLY | SYMOPT_NO_PUBLICS | SYMOPT_NO_IMAGE_SEARCH);
    options |= SYMOPT_CASE_INSENSITIVE | SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES
             | SYMOPT_OMAP_FIND_NEAREST | SYMOPT_EXACT_SYMBOLS | SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_AUTO_PUBLICS
             | SYMOPT_NO_PROMPTS;
    (void)SymSetOptions(options);
}

bool acquireDbgHelpRef(std::wstring const* searchPath = nullptr, bool invadeProcess = false) noexcept {
    if (DbgHelpState::refCount == 0) {
        if (DbgHelpState::handle == nullptr) {
            SetLastError(DbgHelpState::handle.getError());
            return false;
        }
        SetLastError(ERROR_SUCCESS);
        auto const* path = searchPath != nullptr && !searchPath->empty() ? searchPath->c_str() : nullptr;
        if (!SymInitializeW(DbgHelpState::handle, path, invadeProcess)) {
            return false;
        }
        configureSymbols();
    } else if (searchPath != nullptr && !searchPath->empty()) {
        (void)SymSetSearchPathW(DbgHelpState::handle, searchPath->c_str());
    }
    ++DbgHelpState::refCount;
    return true;
}

void releaseDbgHelpRef() noexcept {
    if (DbgHelpState::refCount > 0 && --DbgHelpState::refCount == 0) {
        (void)SymCleanup(DbgHelpState::handle);
    }
}

class [[nodiscard]] DbgHelpQuery {
public:
    DbgHelpQuery() noexcept : lock() {
        if (DbgHelpState::refCount == 0) {
            ownsRef = acquireDbgHelpRef();
        } else {
            initialized = true;
        }
    }

    ~DbgHelpQuery() {
        if (ownsRef) {
            releaseDbgHelpRef();
        }
    }

    DbgHelpQuery(DbgHelpQuery const&)            = delete;
    DbgHelpQuery& operator=(DbgHelpQuery const&) = delete;

    [[nodiscard]] bool ready() const noexcept { return initialized || ownsRef; }

private:
    DbgHelpLock lock;
    bool        ownsRef     = false;
    bool        initialized = false;
};

void ensureModuleLoaded(void const* const address) noexcept {
    auto const addr = reinterpret_cast<DWORD64>(address);
    if (SymGetModuleBase64(DbgHelpState::handle, addr) != 0) {
        return;
    }
    auto const module = sys_utils::getModuleHandle(const_cast<void*>(address));
    if (module == nullptr) {
        return;
    }
    auto const path = sys_utils::getModulePath(module);
    if (!path) {
        return;
    }
    MODULEINFO moduleInfo{};
    (void)GetModuleInformation(GetCurrentProcess(), static_cast<HMODULE>(module), &moduleInfo, sizeof(moduleInfo));
    (void)SymLoadModuleExW(
        DbgHelpState::handle,
        nullptr,
        path->c_str(),
        nullptr,
        reinterpret_cast<DWORD64>(module),
        moduleInfo.SizeOfImage,
        nullptr,
        0
    );
}

StackTraceEntryInfo getInfoByDbgHelp(void const* const address) {
    StackTraceEntryInfo res;
    auto                addr = reinterpret_cast<DWORD64>(address);

    ensureModuleLoaded(address);

    alignas(SYMBOL_INFO) std::byte buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(char)]{};
    auto*                          symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);
    symbol->SizeOfStruct                  = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen                    = MAX_SYM_NAME;

    DWORD64 displacement{};
    if (SymFromAddr(DbgHelpState::handle, addr, &displacement, symbol)) {
        res.displacement = displacement;
        if (symbol->NameLen != 0) {
            res.name = {symbol->Name, symbol->NameLen};
        }
    } else {
        res.displacement = std::nullopt;
    }

    IMAGEHLP_LINE64 lineInfo{};
    lineInfo.SizeOfStruct = sizeof(IMAGEHLP_LINE64);
    DWORD lineDisplacement{};
    if (SymGetLineFromAddr64(DbgHelpState::handle, addr, &lineDisplacement, &lineInfo)) {
        res.line = lineInfo.LineNumber;
        res.file = lineInfo.FileName;
    } else {
        res.line = std::nullopt;
    }

    IMAGEHLP_MODULE64 moduleInfo{};
    moduleInfo.SizeOfStruct = sizeof(IMAGEHLP_MODULE64);
    if (SymGetModuleInfo64(DbgHelpState::handle, addr, &moduleInfo)) {
        std::string module = moduleInfo.ModuleName;
        if (module.empty()) {
            module = moduleInfo.ImageName;
        }
        if (!module.empty()) {
            if (res.name.empty()) {
                res.name = std::move(module);
            } else if (!res.name.contains('!')) {
                res.name = module + '!' + res.name;
            }
        }
        if (!res.displacement && moduleInfo.BaseOfImage != 0) {
            res.displacement = static_cast<size_t>(addr - moduleInfo.BaseOfImage);
        }
    }
    return res;
}

} // namespace detail
using namespace detail;

std::atomic_size_t SymbolLoader::count{};

SymbolLoader::SymbolLoader() : handle(DbgHelpState::handle) {
    DbgHelpLock lock;

    if (!acquireDbgHelpRef(nullptr, true)) {
        throw error_utils::getLastSystemError();
    }
    count.fetch_add(1);
}
SymbolLoader::SymbolLoader(std::string_view extra) : handle(DbgHelpState::handle) {
    DbgHelpLock lock;
    auto const  path = string_utils::str2wstr(extra);

    if (!acquireDbgHelpRef(&path, true)) {
        throw error_utils::getLastSystemError();
    }
    count.fetch_add(1);
}
SymbolLoader::~SymbolLoader() {
    if (handle != nullptr) {
        DbgHelpLock lock;
        releaseDbgHelpRef();
        if (count > 0) {
            count.fetch_sub(1);
        }
        handle = nullptr;
    }
}

StackTraceEntryInfo getInfo(StacktraceEntry const& entry) {
    DbgHelpQuery query;

    if (!query.ready()) {
        return {};
    }
    auto res = getInfoByDbgHelp(entry.native_handle());
    if (res.name.contains('!')) {
        return res;
    }
    static auto processRange = sys_utils::getImageRange();
    if (&*processRange.begin() <= entry.native_handle() && entry.native_handle() < &*processRange.end()) {
        size_t length{};
        uint   disp{};
        auto   str = pl::symbol_provider::pl_lookup_symbol_disp(entry.native_handle(), &length, &disp);
        if (length) {
            static auto processName = sys_utils::getModuleFileName(nullptr);
            res                     = {disp, processName + '!' + str[0]};
            pl::symbol_provider::pl_free_lookup_result(str);
        }
    }
    return res;
}

std::string toString(StacktraceEntry const& entry) {
    std::string res                       = fmt::format("at: 0x{:0>12X}", (uint64)entry.native_handle());
    auto [displacement, name, line, file] = getInfo(entry);
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

std::string toString(Stacktrace const& t) {
    if (t.empty()) {
        return {};
    }
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
} // namespace ll::inline utils::stacktrace_utils
