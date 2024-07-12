#pragma once

#include "ll/api/data/Version.h"

namespace ll {
LLNDAPI data::Version getGameVersion();
LLNDAPI data::Version getLoaderVersion();
LLNDAPI int           getNetworkProtocolVersion();
} // namespace ll
