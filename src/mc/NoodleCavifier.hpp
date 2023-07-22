/**
 * @file  NoodleCavifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NoodleCavifier.
 *
 */
class NoodleCavifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOODLECAVIFIER
public:
    class NoodleCavifier& operator=(class NoodleCavifier const &) = delete;
    NoodleCavifier(class NoodleCavifier const &) = delete;
    NoodleCavifier() = delete;
#endif

public:
    /**
     * @symbol  ??0NoodleCavifier\@\@QEAA\@AEBVNoodleCavifierNoises\@\@F\@Z
     */
    MCAPI NoodleCavifier(class NoodleCavifierNoises const &, short);
    /**
     * @symbol  ?cavify\@NoodleCavifier\@\@QEBAMMAEBVBlockPos\@\@\@Z
     */
    MCAPI float cavify(float, class BlockPos const &) const;
    /**
     * @symbol  ?fillNoiseAtPos\@NoodleCavifier\@\@QEAAXAEBVVec3\@\@HM\@Z
     */
    MCAPI void fillNoiseAtPos(class Vec3 const &, int, float);
    /**
     * @symbol  ?getInterpolators\@NoodleCavifier\@\@QEAA?AV?$array\@PEAVNoiseCellInterpolator\@\@$03\@std\@\@HH\@Z
     */
    MCAPI class std::array<class NoiseCellInterpolator *, 4> getInterpolators(int, int);

};