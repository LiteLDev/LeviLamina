#include "ll/api/utils/StacktraceUtils.h"
#if _HAS_CXX23
#include <iostream>

#include "fmt/format.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "windows.h"

#include "DbgHelp.h"
#pragma comment(lib, "DbgHelp.lib")

namespace ll::utils::stacktrace_utils {

SymbolLoader::SymbolLoader() : handle(GetCurrentProcess()) {
    if (!SymInitializeW(handle, nullptr, true)) {
        throw error_info::getWinLastError();
    }
    DWORD options  = SymGetOptions();
    options       |= SYMOPT_LOAD_LINES | SYMOPT_EXACT_SYMBOLS;
    SymSetOptions(options);
}
SymbolLoader::SymbolLoader(std::string const& path) : handle(GetCurrentProcess()) {
    if (!SymInitializeW(handle, string_utils::str2wstr(path).c_str(), true)) {
        throw error_info::getWinLastError();
    }
    DWORD options  = SymGetOptions();
    options       |= SYMOPT_LOAD_LINES | SYMOPT_EXACT_SYMBOLS;
    SymSetOptions(options);
}
SymbolLoader::~SymbolLoader() { SymCleanup(handle); }

std::string toString(std::stacktrace_entry const& entry) {
    std::string res         = fmt::format("at: 0x{:0>12X}", (uint64)entry.native_handle());
    std::string description = entry.description();
    auto        plusPos     = description.find_last_of('+');
    std::string offset      = description.contains('+') ? description.substr(1 + plusPos) : "";
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
        auto buf     = std::make_unique_for_overwrite<char[]>(sizeof(SYMBOL_INFOW) + MAX_SYM_NAME * sizeof(WCHAR));
        auto pSymbol = (PSYMBOL_INFOW)buf.get();
        pSymbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        pSymbol->MaxNameLen   = MAX_SYM_NAME;
        DWORD64 displacement;
        if (SymFromAddrW(GetCurrentProcess(), (DWORD64)entry.native_handle(), &displacement, pSymbol)) {
            function = string_utils::wstr2str({pSymbol->Name, pSymbol->NameLen});
            offset   = fmt::format("0x{:X}", displacement);
        }
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
} // namespace ll::utils::stacktrace_utils

#endif