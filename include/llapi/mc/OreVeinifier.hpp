/**
 * @file  OreVeinifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OreVeinifier.
 *
 */
class OreVeinifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREVEINIFIER
public:
    class OreVeinifier& operator=(class OreVeinifier const &) = delete;
    OreVeinifier(class OreVeinifier const &) = delete;
    OreVeinifier() = delete;
#endif

public:
    /**
     * @symbol  ??0OreVeinifier\@\@QEAA\@AEBVOreVeinifierNoises\@\@\@Z
     */
    MCAPI OreVeinifier(class OreVeinifierNoises const &);
    /**
     * @symbol  ?fillNoiseAtPos\@OreVeinifier\@\@QEAAXAEBVVec3\@\@HM\@Z
     */
    MCAPI void fillNoiseAtPos(class Vec3 const &, int, float);
    /**
     * @symbol  ?getVeinBlockOrFallback\@OreVeinifier\@\@QEBAPEBVBlock\@\@VVec3\@\@PEBV2\@\@Z
     */
    MCAPI class Block const * getVeinBlockOrFallback(class Vec3, class Block const *) const;
    /**
     * @symbol  ?resetAndGetInterpolators\@OreVeinifier\@\@QEAA?AV?$array\@PEAVNoiseCellInterpolator\@\@$02\@std\@\@XZ
     */
    MCAPI class std::array<class NoiseCellInterpolator *, 3> resetAndGetInterpolators();

};