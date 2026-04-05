#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace GameTypeConv {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCNAPI ::std::string gameTypeToNonLocString(::GameType type);
#endif

MCNAPI ::std::string gameTypeToString(::GameType type);

MCNAPI ::GameType stringToGameType(::std::string const& str);
// NOLINTEND

} // namespace GameTypeConv
