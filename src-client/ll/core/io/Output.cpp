#include "ll/core/io/Output.h"
#include "ll/core/tweak/ModifyInfomation.h"

namespace ll::io {
void defaultOutput(std::string_view sv) { getDefaultLogPipe().write(sv); }
} // namespace ll::io
