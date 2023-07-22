#pragma once
#include <string>
#include "liteloader/api/Global.h"

namespace ll {
LLAPI std::string getBdsVersion();
LLAPI int getServerProtocolVersion();
LLAPI bool setServerMotd(const std::string& motd);
} // namespace ll

// for abi compatibility
namespace LL {
[[deprecated("Moved to ll::getBdsVersion()")]] LLAPI std::string getBdsVersion();
[[deprecated("Moved to ll::getServerProtocolVersion()")]] LLAPI int getServerProtocolVersion();
[[deprecated("Moved to ll::setServerMotd()")]] LLAPI bool setServerMotd(const std::string& motd);
} // namespace LL
