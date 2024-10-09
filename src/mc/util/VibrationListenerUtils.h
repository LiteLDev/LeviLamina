#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationListenerUtils {
// NOLINTBEGIN
MCAPI int getGameEventFrequency(class GameEvent const& gameEvent);

MCAPI class GameEvent const& getResonateEventByFrequency(int frequency);

MCAPI bool ignoreVibrationIfSneaking(
    class BlockSource&,
    class GameEvent const&         gameEvent,
    struct GameEventContext const& gameEventContext
);
// NOLINTEND

}; // namespace VibrationListenerUtils
