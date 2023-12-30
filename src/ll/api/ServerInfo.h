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

std::atomic<ServerStatus>& getServerStatusNonConst();
LLNDAPI ServerStatus       getServerStatus();
LLNDAPI Version            getBdsVersion();
LLNDAPI Version            getLoaderVersion();
LLNDAPI int                getServerProtocolVersion();
LLNDAPI bool               setServerMotd(std::string const& motd);
} // namespace ll
