#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace PlayerGameTypeUtility {
// NOLINTBEGIN
// symbol: ?isAdventure@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isAdventure(::GameType playerGameType, ::GameType);

// symbol: ?isCreative@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isCreative(::GameType playerGameType, ::GameType);

// symbol: ?isSpectator@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isSpectator(::GameType playerGameType, ::GameType);

// symbol: ?isSurvival@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isSurvival(::GameType playerGameType, ::GameType);

// symbol: ?isWorldBuilderBedrock@PlayerGameTypeUtility@@YA_NAEBUAbilitiesComponent@@W4GameType@@1@Z
MCAPI bool isWorldBuilderBedrock(struct AbilitiesComponent const&, ::GameType playerGameType, ::GameType);
// NOLINTEND

}; // namespace PlayerGameTypeUtility
