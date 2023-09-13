#pragma once
#include "liteloader/api/base/Global.h"
#include <string>

namespace ll {
LLAPI std::string getBdsVersion();
LLAPI int         getServerProtocolVersion();
LLAPI bool        setServerMotd(const std::string& motd);
} // namespace ll
