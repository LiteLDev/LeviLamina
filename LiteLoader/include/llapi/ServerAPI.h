#pragma once
#include <string>
#include "llapi/Global.h"

namespace ll {
LIAPI std::string getBdsVersion();
LIAPI int getServerProtocolVersion();
LIAPI bool setServerMotd(const std::string& motd);
} // namespace ll

// for abi compatibility
namespace LL {
[[deprecated("Moved to ll::getBdsVersion()")]] LIAPI std::string getBdsVersion();
[[deprecated("Moved to ll::getServerProtocolVersion()")]] LIAPI int getServerProtocolVersion();
[[deprecated("Moved to ll::setServerMotd()")]] LIAPI bool setServerMotd(const std::string& motd);
} // namespace LL
