#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationListenerUtils {
// NOLINTBEGIN
// symbol: ?getGameEventFrequency@VibrationListenerUtils@@YAHAEBVGameEvent@@@Z
MCAPI int getGameEventFrequency(class GameEvent const&);

// symbol: ?getResonateEventByFrequency@VibrationListenerUtils@@YAAEBVGameEvent@@H@Z
MCAPI class GameEvent const& getResonateEventByFrequency(int frequency);

// symbol:
// ?ignoreVibrationIfSneaking@VibrationListenerUtils@@YA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
MCAPI bool ignoreVibrationIfSneaking(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
// NOLINTEND

}; // namespace VibrationListenerUtils
