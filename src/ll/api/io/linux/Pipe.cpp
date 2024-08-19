#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "ll/api/io/Pipe.h"

namespace ll::io {

static void createUnixPipe(int& fdRead, int& fdWrite, size_t size, bool nowait) {
    int pipefd[2];
    if (pipe(pipefd) == -1) {
        throw std::runtime_error("Failed to create pipe.");
    }

    fdRead  = pipefd[0];
    fdWrite = pipefd[1];

    fcntl(fdRead, F_SETPIPE_SZ, size);

    if (nowait) {
        fcntl(fdRead, F_SETFL, fcntl(fdRead, F_GETFL) | O_NONBLOCK);
        fcntl(fdWrite, F_SETFL, fcntl(fdWrite, F_GETFL) | O_NONBLOCK);
    }
}

Pipe::Pipe(size_t size, bool nowait) { createUnixPipe(fdRead, fdWrite, size, nowait); }

Pipe::~Pipe() {
    close(fdRead);
    close(fdWrite);
}

std::string Pipe::read() {
    std::string result;
    char        buf[4096];
    size_t      bytesRead{};

    do {
        bytesRead = ::read(fdRead, buf, sizeof(buf));
        if (bytesRead > 0) {
            result.append(buf, bytesRead);
        }
    } while (bytesRead > 0 || (bytesRead == -1 && errno == EAGAIN));

    return result;
}

void Pipe::write(std::string_view data) {
    size_t lastBytesWritten{};
    size_t totalBytesWritten{};

    while (totalBytesWritten < data.size()) {
        lastBytesWritten = ::write(fdWrite, data.data() + totalBytesWritten, data.size() - totalBytesWritten);

        if (lastBytesWritten == -1) {
            if (errno != EAGAIN && errno != EWOULDBLOCK) {
                throw std::runtime_error("Failed to write to pipe.");
            }
            continue;
        }

        totalBytesWritten += lastBytesWritten;
    }
}

} // namespace ll::io