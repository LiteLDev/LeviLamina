#pragma once

#include "ll/api/base/Version.h"

namespace ll {
LLNDAPI Version getBdsVersion();
LLNDAPI Version getLoaderVersion();
LLNDAPI int     getServerProtocolVersion();
LLNDAPI bool    setServerMotd(std::string const& motd);
} // namespace ll
