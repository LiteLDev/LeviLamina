#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifier {

public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&) = delete;
    NoodleCavifier(NoodleCavifier const&)            = delete;
    NoodleCavifier()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0NoodleCavifier\@\@QEAA\@AEBVNoodleCavifierNoises\@\@F\@Z
     */
    MCAPI NoodleCavifier(class NoodleCavifierNoises const&, short);
    /**
     * @symbol ?cavify\@NoodleCavifier\@\@QEBAMMAEBVBlockPos\@\@\@Z
     */
    MCAPI float cavify(float, class BlockPos const&) const;
    /**
     * @symbol ?fillNoiseAtPos\@NoodleCavifier\@\@QEAAXAEBVVec3\@\@HM\@Z
     */
    MCAPI void fillNoiseAtPos(class Vec3 const&, int, float);
    /**
     * @symbol ?getInterpolators\@NoodleCavifier\@\@QEAA?AV?$array\@PEAVNoiseCellInterpolator\@\@$03\@std\@\@HH\@Z
     */
    MCAPI std::array<class NoiseCellInterpolator*, 4> getInterpolators(int, int);
    // NOLINTEND
};
