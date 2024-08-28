#include "ll/api/io/Formatter.h"
#include "pl/Config.h"

namespace ll::io {
bool Formatter::supportColorLog() { return (bool)pl::pl_color_log; }
} // namespace ll::io
