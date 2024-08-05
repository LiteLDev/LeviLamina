#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationListenerUtils {
// NOLINTBEGIN
MCAPI int getGameEventFrequency(class GameEvent const&);

MCAPI class GameEvent const& getResonateEventByFrequency(int frequency);

MCAPI bool ignoreVibrationIfSneaking(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
// NOLINTEND

}; // namespace VibrationListenerUtils
