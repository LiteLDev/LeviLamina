#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace PlayerGameTypeUtility {
// NOLINTBEGIN
// symbol: ?isAdventure@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isAdventure(::GameType, ::GameType);

// symbol: ?isCreative@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isCreative(::GameType, ::GameType);

// symbol: ?isSpectator@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isSpectator(::GameType, ::GameType);

// symbol: ?isSurvival@PlayerGameTypeUtility@@YA_NW4GameType@@0@Z
MCAPI bool isSurvival(::GameType, ::GameType);

// symbol: ?isWorldBuilderBedrock@PlayerGameTypeUtility@@YA_NAEBUAbilitiesComponent@@W4GameType@@1@Z
MCAPI bool isWorldBuilderBedrock(struct AbilitiesComponent const&, ::GameType, ::GameType);
// NOLINTEND

}; // namespace PlayerGameTypeUtility
