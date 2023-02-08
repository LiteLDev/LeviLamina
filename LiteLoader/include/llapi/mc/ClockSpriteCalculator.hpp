/**
 * @file  ClockSpriteCalculator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClockSpriteCalculator.
 *
 */
class ClockSpriteCalculator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOCKSPRITECALCULATOR
public:
    class ClockSpriteCalculator& operator=(class ClockSpriteCalculator const &) = delete;
    ClockSpriteCalculator(class ClockSpriteCalculator const &) = delete;
#endif

public:
    /**
     * @hash   -295418287
     * @symbol  ??0ClockSpriteCalculator\@\@QEAA\@XZ
     */
    MCAPI ClockSpriteCalculator();
    /**
     * @hash   -46847660
     * @symbol  ?getFrame\@ClockSpriteCalculator\@\@QEBAHXZ
     */
    MCAPI int getFrame() const;
    /**
     * @hash   -521303438
     * @symbol  ?update\@ClockSpriteCalculator\@\@QEAAHAEAVActor\@\@_N\@Z
     */
    MCAPI int update(class Actor &, bool);
    /**
     * @hash   773547183
     * @symbol  ?update\@ClockSpriteCalculator\@\@QEAAHAEBVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI int update(class BlockSource const &, class Vec3 const &, bool);

};