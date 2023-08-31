#pragma once
#include <string>
#include "liteloader/api/Global.h"

namespace ll {
LLAPI std::string getBdsVersion();
LLAPI int32_t getServerProtocolVersion();
LLAPI bool setServerMotd(const std::string& motd);
} // namespace ll
