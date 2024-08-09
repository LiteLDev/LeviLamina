#pragma once

#include <atomic>

#include "ll/api/data/Version.h"

namespace ll {
enum class ServerStatus : int {
    Default = 0,
    Starting,
    Running,
    Stopping,
};
void setServerStatus(ServerStatus);

LLNDAPI ServerStatus getServerStatus();
LLNDAPI bool         setServerMotd(std::string const& serverName, bool shouldAnnounce = true);
} // namespace ll
