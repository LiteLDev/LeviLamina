/**
 * @file  NoodleCavifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -554780743
     * @symbol  ??0NoodleCavifier\@\@QEAA\@AEBVNoodleCavifierNoises\@\@F\@Z
     */
    MCAPI NoodleCavifier(class NoodleCavifierNoises const &, short);
    /**
     * @hash   2125797244
     * @symbol  ?cavify\@NoodleCavifier\@\@QEBAMMAEBVBlockPos\@\@\@Z
     */
    MCAPI float cavify(float, class BlockPos const &) const;
    /**
     * @hash   -1199457802
     * @symbol  ?fillNoiseAtPos\@NoodleCavifier\@\@QEAAXAEBVVec3\@\@HM\@Z
     */
    MCAPI void fillNoiseAtPos(class Vec3 const &, int, float);
    /**
     * @hash   -1536992512
     * @symbol  ?getInterpolators\@NoodleCavifier\@\@QEAA?AV?$array\@PEAVNoiseCellInterpolator\@\@$03\@std\@\@HH\@Z
     */
    MCAPI class std::array<class NoiseCellInterpolator *, 4> getInterpolators(int, int);

};