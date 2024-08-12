#include "ll/core/io/Output.h"

#include "fmt/core.h"
#include "fmt/format.h"

namespace ll::io {
void defaultOutput(std::string_view sv) { fmt::print("{}", sv); }
} // namespace ll::io
