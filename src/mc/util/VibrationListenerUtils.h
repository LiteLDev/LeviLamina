#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationListenerUtils {
/**
 * @symbol ?getGameEventFrequency\@VibrationListenerUtils\@\@YAHAEBVGameEvent\@\@\@Z
 */
MCAPI int getGameEventFrequency(class GameEvent const&); // NOLINT
/**
 * @symbol ?getResonateEventByFrequency\@VibrationListenerUtils\@\@YAAEBVGameEvent\@\@H\@Z
 */
MCAPI class GameEvent const& getResonateEventByFrequency(int); // NOLINT
/**
 * @symbol
 * ?ignoreVibrationIfSneaking\@VibrationListenerUtils\@\@YA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
 */
MCAPI bool
ignoreVibrationIfSneaking(class BlockSource&, class GameEvent const&, struct GameEventContext const&); // NOLINT

}; // namespace VibrationListenerUtils
