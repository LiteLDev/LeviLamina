#include "ll/api/io/StdoutRedirector.h"
#include "ll/api/utils/ErrorUtils.h"

#include "Windows.h"

namespace ll::io {

StdoutRedirector::StdoutRedirector(void* outputHandle, ProcessChannel channels)
: outputHandle(outputHandle),
  channels(channels) {
    if (channels & StandardOutput) {
        setvbuf(stdout, nullptr, _IONBF, 0);
        ::SetStdHandle(STD_OUTPUT_HANDLE, outputHandle);
    }
    if (channels & StandardError) {
        setvbuf(stderr, nullptr, _IONBF, 0);
        ::SetStdHandle(STD_ERROR_HANDLE, outputHandle);
    }
    int fd = _open_osfhandle((intptr_t)outputHandle, _O_WRONLY | _O_U8TEXT);
    if (channels & StandardOutput) _dup2(fd, 1);
    if (channels & StandardError) _dup2(fd, 2);
    _close(fd);
}
StdoutRedirector::~StdoutRedirector() {
    if (channels & StandardOutput) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stdout);
    }
    if (channels & StandardError) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stderr);
    }
}
} // namespace ll::io
