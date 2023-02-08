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
#endif

public:
    /**
     * @hash   -919704371
     * @symbol  ??0VibrationSelector\@\@QEAA\@XZ
     */
    MCAPI VibrationSelector();
    /**
     * @hash   -211031755
     * @symbol  ?addCandidate\@VibrationSelector\@\@QEAAXUTick\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void addCandidate(struct Tick, class GameEvent const &, struct GameEventContext const &, class BlockPos const &);
    /**
     * @hash   -813588756
     * @symbol  ?consumeBestCandidate\@VibrationSelector\@\@QEAA?AV?$optional\@VVibrationInfo\@\@\@std\@\@UTick\@\@\@Z
     */
    MCAPI class std::optional<class VibrationInfo> consumeBestCandidate(struct Tick);
    /**
     * @hash   1733351689
     * @symbol  ?load\@VibrationSelector\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   390133678
     * @symbol  ?save\@VibrationSelector\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;

};