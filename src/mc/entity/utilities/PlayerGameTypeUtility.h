#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace PlayerGameTypeUtility {
// functions
// NOLINTBEGIN
MCNAPI bool isAdventure(::GameType playerGameType, ::GameType levelGameType);

MCNAPI bool isCreative(::GameType playerGameType, ::GameType levelGameType);

MCNAPI bool isSpectator(::GameType playerGameType, ::GameType levelGameType);

MCNAPI bool isSurvival(::GameType playerGameType, ::GameType levelGameType);
// NOLINTEND

} // namespace PlayerGameTypeUtility
