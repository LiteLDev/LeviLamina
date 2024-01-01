#pragma once

#include <atomic>

#include "ll/api/base/Version.h"

namespace ll {
enum class ServerStatus {
    Default = 0,
    Starting,
    Running,
    Stopping,
};
void setServerStatus(ServerStatus);

LLNDAPI ServerStatus getServerStatus();
LLNDAPI Version      getBdsVersion();
LLNDAPI Version      getLoaderVersion();
LLNDAPI int          getServerProtocolVersion();
LLNDAPI bool         setServerMotd(std::string const& serverName, bool shouldAnnounce = true);
} // namespace ll
