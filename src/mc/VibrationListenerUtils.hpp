/**
 * @file  VibrationListenerUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VibrationListenerUtils.
 *
 */
namespace VibrationListenerUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getGameEventFrequency\@VibrationListenerUtils\@\@YAHAEBVGameEvent\@\@\@Z
     */
    MCAPI int getGameEventFrequency(class GameEvent const &);
    /**
     * @symbol  ?ignoreVibrationIfSneaking\@VibrationListenerUtils\@\@YA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    MCAPI bool ignoreVibrationIfSneaking(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};