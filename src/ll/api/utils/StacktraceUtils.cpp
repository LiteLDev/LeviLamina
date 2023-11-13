#include "ll/api/utils/StacktraceUtils.h"
#if _HAS_CXX23
#include <iostream>

#include "fmt/format.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "windows.h"

#include "DbgHelp.h"
#pragma comment(lib, "dbghelp.lib")

namespace ll::utils::stacktrace_utils {

SymbolLoader::SymbolLoader() : handle(GetCurrentProcess()) {
    SymInitializeW(handle, nullptr, true);
    DWORD options  = SymGetOptions();
    options       |= SYMOPT_LOAD_LINES;
    SymSetOptions(options);
}
SymbolLoader::~SymbolLoader() { SymCleanup(handle); }

std::string toString(std::stacktrace_entry const& entry) {
    std::string res         = fmt::format("at: 0x{:X}", (uint64)entry.native_handle());
    std::string description = entry.description();
    auto        plusPos     = description.find_last_of('+');
    std::string offset      = description.substr(1 + plusPos);
    std::string module      = description.substr(0, plusPos);
    std::string filepath    = entry.source_file();
    auto        fileline    = entry.source_line();
    std::string function;
    if (filepath.empty()) {
        IMAGEHLP_LINEW64 line{};
        DWORD            lineDisplacement{};
        line.SizeOfStruct = sizeof(IMAGEHLP_LINEW64);
        if (SymGetLineFromAddrW64(GetCurrentProcess(), (DWORD64)entry.native_handle(), &lineDisplacement, &line)) {
            filepath = string_utils::u8str2str(std::filesystem::path(line.FileName).filename().u8string());
            fileline = line.LineNumber;
        }
    } else {
        filepath = string_utils::u8str2str(file_utils::u8path(filepath).filename().u8string());
    }

    if (description.contains('!')) {
        auto pos = description.find_first_of('!');
        function = module.substr(1 + pos);
        module   = module.substr(0, pos);
    } else {
        auto pSymbol          = (PSYMBOL_INFOW) new char[sizeof(SYMBOL_INFOW) + MAX_SYM_NAME * sizeof(WCHAR)];
        pSymbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        pSymbol->MaxNameLen   = MAX_SYM_NAME;
        DWORD64 displacement;
        if (SymFromAddrW(GetCurrentProcess(), (DWORD64)entry.native_handle(), &displacement, pSymbol)) {
            function = string_utils::wstr2str({pSymbol->Name, pSymbol->NameLen});
            offset   = fmt::format("0x{:X}", displacement);
        }
        delete[] ((char*)pSymbol);
    }
    if (!module.empty()) res += fmt::format(" {}", module);
    if (!function.empty()) res += fmt::format(" -> {}", function);
    if (!offset.empty()) res += fmt::format(" + {}", offset);
    if (!filepath.empty()) res += fmt::format(" [{}:{}L]", filepath, fileline);
    return res;
}

std::string toString(std::stacktrace const& t) {
    std::string res;
    auto        maxsize = std::to_string(t.size() - 1).size();
    for (size_t i = 0; i < t.size(); i++) { res += fmt::format("{1:>{0}}> {2}\n", maxsize, i, toString(t[i])); }
    if (res.ends_with('\n')) { res.pop_back(); }
    return res;
}
} // namespace ll::utils::stacktrace_utils

#endif