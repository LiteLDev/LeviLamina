#include "ll/api/io/StdoutRedirector.h"

#include "Windows.h"

#include "fcntl.h"
#include "io.h"
#include "ll/api/utils/ErrorUtils.h"

namespace ll::io {

StdoutRedirector::StdoutRedirector(ProcessChannel channels) : m_channels(channels) {
    if (m_channels & StandardOutput) {
        setvbuf(stdout, NULL, _IONBF, 0);
        ::SetStdHandle(STD_OUTPUT_HANDLE, hWrite);
    }
    if (m_channels & StandardError) {
        setvbuf(stderr, NULL, _IONBF, 0);
        ::SetStdHandle(STD_ERROR_HANDLE, hWrite);
    }
    // int fd = _open_osfhandle((intptr_t)hWrite, _O_WRONLY | _O_U8TEXT);
    // if (m_channels & StandardOutput) _dup2(fd, 1);
    // if (m_channels & StandardError) _dup2(fd, 2);
    // _close(fd);
}

StdoutRedirector::~StdoutRedirector() {
    if (m_channels & StandardOutput) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stdout);
    }
    if (m_channels & StandardError) {
        FILE* s;
        freopen_s(&s, "CONOUT$", "w+t", stderr);
    }
}
} // namespace ll::io
