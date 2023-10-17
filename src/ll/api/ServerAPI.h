#pragma once
#include "ll/api/base/Global.h"

namespace ll {
LLNDAPI std::string getBdsVersion();
LLNDAPI int         getServerProtocolVersion();
LLNDAPI bool        setServerMotd(std::string const& motd);
} // namespace ll
