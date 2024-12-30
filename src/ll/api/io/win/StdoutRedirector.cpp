#include "ll/api/io/StdoutRedirector.h"
#include "ll/api/utils/ErrorUtils.h"

#include "Windows.h"
#include "fcntl.h"
#include "io.h"

namespace ll::io {

StdoutRedirector::StdoutRedirector(internal::FileHandleT outputHandle, ProcessChannel channels) {
    int fd = _open_osfhandle((intptr_t)outputHandle, _O_WRONLY | _O_U8TEXT);
    if (channels & StandardOutput) {
        oldStdout = _dup(_fileno(stdout));
        setvbuf(stdout, nullptr, _IONBF, 0);
        (void)_dup2(fd, 1);
    }
    if (channels & StandardError) {
        oldStderr = _dup(_fileno(stderr));
        setvbuf(stderr, nullptr, _IONBF, 0);
        (void)_dup2(fd, 2);
    }
    _close(fd);
}
StdoutRedirector::~StdoutRedirector() {
    if (oldStdout != -1) {
        (void)_dup2(oldStdout, _fileno(stdout));
        _close(oldStdout);
    }
    if (oldStderr != -1) {
        (void)_dup2(oldStderr, _fileno(stderr));
        _close(oldStderr);
    }
}
} // namespace ll::io
