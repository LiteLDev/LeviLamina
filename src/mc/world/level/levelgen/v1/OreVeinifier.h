#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OreVeinifier {

public:
    // prevent constructor by default
    OreVeinifier& operator=(OreVeinifier const&) = delete;
    OreVeinifier(OreVeinifier const&)            = delete;
    OreVeinifier()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0OreVeinifier\@\@QEAA\@AEBVOreVeinifierNoises\@\@\@Z
     */
    MCAPI OreVeinifier(class OreVeinifierNoises const&);
    /**
     * @symbol ?fillNoiseAtPos\@OreVeinifier\@\@QEAAXAEBVVec3\@\@HM\@Z
     */
    MCAPI void fillNoiseAtPos(class Vec3 const&, int, float);
    /**
     * @symbol ?getVeinBlockOrFallback\@OreVeinifier\@\@QEBAPEBVBlock\@\@VVec3\@\@PEBV2\@\@Z
     */
    MCAPI class Block const* getVeinBlockOrFallback(class Vec3, class Block const*) const;
    /**
     * @symbol ?resetAndGetInterpolators\@OreVeinifier\@\@QEAA?AV?$array\@PEAVNoiseCellInterpolator\@\@$02\@std\@\@XZ
     */
    MCAPI std::array<class NoiseCellInterpolator*, 3> resetAndGetInterpolators();
    // NOLINTEND
};
