#pragma once

#include "ll/api/plugin/Version.h"

namespace ll {
LLNDAPI plugin::Version getBdsVersion();
LLNDAPI plugin::Version getLoaderVersion();
LLNDAPI int             getServerProtocolVersion();
LLNDAPI bool            setServerMotd(std::string const& motd);
} // namespace ll
