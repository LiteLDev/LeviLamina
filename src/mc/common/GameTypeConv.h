#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace GameTypeConv {
// NOLINTBEGIN
MCAPI std::string gameTypeToNonLocString(::GameType);

MCAPI std::string gameTypeToString(::GameType);

MCAPI ::GameType intToGameType(int id);

MCAPI ::GameType intToGameTypeForCommands(int id);

MCAPI ::GameType stringToGameType(std::string const& str);
// NOLINTEND

}; // namespace GameTypeConv
