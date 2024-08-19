#pragma once

#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::io {

class Pipe {
public:
    LLNDAPI explicit Pipe(size_t size = 1024 * 1024, bool nowait = true);

    LLAPI ~Pipe();

    LLNDAPI std::string read();

    LLAPI void write(std::string_view);

private:
// win32 handle
#if WIN32
    void* hRead;
    void* hWrite;
#endif
// linux file descriptor
#ifdef __linux__
    int fdRead{};
    int fdWrite{};
#endif
};
} // namespace ll::io
