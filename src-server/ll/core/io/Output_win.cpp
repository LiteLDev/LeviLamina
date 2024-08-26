#include "ll/api/utils/StringUtils.h"
#include "ll/core/io/Output.h"

#include "Windows.h"

namespace ll::io {
void defaultOutput(std::string_view sv) {
    auto wstr = string_utils::str2wstr(sv);
    WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), wstr.data(), (DWORD)wstr.size(), nullptr, nullptr);
    // WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), sv.data(), (DWORD)sv.size(), nullptr, nullptr);
}
} // namespace ll::io
