#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationListenerUtils {
// NOLINTBEGIN
/**
 * @symbol ?getGameEventFrequency\@VibrationListenerUtils\@\@YAHAEBVGameEvent\@\@\@Z
 */
MCAPI int32_t getGameEventFrequency(class GameEvent const&);
/**
 * @symbol ?getResonateEventByFrequency\@VibrationListenerUtils\@\@YAAEBVGameEvent\@\@H\@Z
 */
MCAPI class GameEvent const& getResonateEventByFrequency(int32_t);
/**
 * @symbol
 * ?ignoreVibrationIfSneaking\@VibrationListenerUtils\@\@YA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
 */
MCAPI bool ignoreVibrationIfSneaking(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
// NOLINTEND

}; // namespace VibrationListenerUtils
