#include "ll/core/io/Output.h"
#include "ll/api/utils/StringUtils.h"

#include "Windows.h"

namespace ll::io {
void defaultOutput(std::string_view sv) {
    WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), sv.data(), (DWORD)sv.size(), nullptr, nullptr);
}
} // namespace ll::io
