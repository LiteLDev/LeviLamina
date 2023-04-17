/**
 * @file  VibrationSelector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationSelector.
 *
 */
class VibrationSelector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONSELECTOR
public:
    class VibrationSelector& operator=(class VibrationSelector const &) = delete;
    VibrationSelector(class VibrationSelector const &) = delete;
    VibrationSelector() = delete;
#endif

public:
    /**
     * @symbol ?addCandidate\@VibrationSelector\@\@QEAAXUTick\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void addCandidate(struct Tick, class GameEvent const &, struct GameEventContext const &, class BlockPos const &);

};
