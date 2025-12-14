#include "ll/core/io/Output.h"
#include "ll/core/io/LogPipe.h"
#include "ll/api/utils/StringUtils.h"

#include "Windows.h"
#include "io.h"
namespace ll::io {
void defaultOutput(std::string_view sv) { 
    getDefaultLogPipe().write(sv); 
    auto fd = _fileno(stdout);
    if (_isatty(fd)) {
        auto wstr = string_utils::str2wstr(sv);
        if (WriteConsoleW((HANDLE)_get_osfhandle(fd), wstr.data(), (DWORD)wstr.size(), nullptr, nullptr)) {
            return;
        }
    }
    std::fwrite(sv.data(), sizeof(char), sv.size(), stdout);
}
} // namespace ll::io
