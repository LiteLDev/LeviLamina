#include "ll/api/io/StdoutRedirector.h"

#include <fcntl.h>
#include <unistd.h>

namespace ll::io {

StdoutRedirector::StdoutRedirector(internal::FileHandleT outputFd, ProcessChannel channels) {
    if (channels & StandardOutput) {
        oldStdout = dup(STDOUT_FILENO);
        setvbuf(stdout, nullptr, _IONBF, 0);
        dup2(outputFd, STDOUT_FILENO);
    }
    if (channels & StandardError) {
        oldStderr = dup(STDERR_FILENO);
        setvbuf(stderr, nullptr, _IONBF, 0);
        dup2(outputFd, STDERR_FILENO);
    }
}
StdoutRedirector::~StdoutRedirector() {
    if (oldStdout != -1) {
        dup2(oldStdout, STDOUT_FILENO);
        close(oldStdout);
    }
    if (oldStderr != -1) {
        dup2(oldStderr, STDERR_FILENO);
        close(oldStderr);
    }
}
} // namespace ll::io
