#include "ll/core/io/LogPipe.h"

namespace ll::io {
ll::io::Pipe& getDefaultLogPipe() {
    static ll::io::Pipe defaultLogPipe;
    return defaultLogPipe;
}
} // namespace ll::io
