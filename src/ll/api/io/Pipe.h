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
#if defined(LL_WIN32)
    void* hRead;
    void* hWrite;
#elif defined(LL_LINUX)
    int fdRead{};
    int fdWrite{};
#endif
};
} // namespace ll::io
