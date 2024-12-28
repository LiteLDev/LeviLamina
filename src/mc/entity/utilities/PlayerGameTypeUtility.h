#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace PlayerGameTypeUtility {
// functions
// NOLINTBEGIN
MCAPI bool isAdventure(::GameType playerGameType, ::GameType levelGameType);

MCAPI bool isCreative(::GameType playerGameType, ::GameType levelGameType);

MCAPI bool isSpectator(::GameType playerGameType, ::GameType levelGameType);

MCAPI bool isSurvival(::GameType playerGameType, ::GameType levelGameType);
// NOLINTEND

} // namespace PlayerGameTypeUtility
