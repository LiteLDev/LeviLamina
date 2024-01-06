#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace GameTypeConv {
// NOLINTBEGIN
// symbol:
// ?gameTypeToNonLocString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
MCAPI std::string gameTypeToNonLocString(::GameType);

// symbol:
// ?gameTypeToString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
MCAPI std::string gameTypeToString(::GameType);

// symbol: ?intToGameType@GameTypeConv@@YA?AW4GameType@@H@Z
MCAPI ::GameType intToGameType(int id);

// symbol: ?intToGameTypeForCommands@GameTypeConv@@YA?AW4GameType@@H@Z
MCAPI ::GameType intToGameTypeForCommands(int id);

// symbol:
// ?stringToGameType@GameTypeConv@@YA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::GameType stringToGameType(std::string const& str);
// NOLINTEND

}; // namespace GameTypeConv
