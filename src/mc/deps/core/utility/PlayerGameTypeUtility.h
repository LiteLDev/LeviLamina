#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace PlayerGameTypeUtility {
// NOLINTBEGIN
MCAPI bool isAdventure(::GameType playerGameType, ::GameType);

MCAPI bool isCreative(::GameType playerGameType, ::GameType);

MCAPI bool isSpectator(::GameType playerGameType, ::GameType);

MCAPI bool isSurvival(::GameType playerGameType, ::GameType);
// NOLINTEND

}; // namespace PlayerGameTypeUtility
