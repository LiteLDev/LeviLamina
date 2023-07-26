#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoiseCellInterpolator {

public:
    // prevent constructor by default
    NoiseCellInterpolator& operator=(NoiseCellInterpolator const&) = delete;
    NoiseCellInterpolator(NoiseCellInterpolator const&)            = delete;
    NoiseCellInterpolator()                                        = delete;

public:
    /**
     * @symbol ??0NoiseCellInterpolator\@\@QEAA\@V?$span\@$$CBM$0?0\@gsl\@\@HH\@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>, int, int); // NOLINT
    /**
     * @symbol ??0NoiseCellInterpolator\@\@QEAA\@V?$span\@$$CBM$0?0\@gsl\@\@\@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>); // NOLINT
    /**
     * @symbol ?getLerpedValue\@NoiseCellInterpolator\@\@QEBAMXZ
     */
    MCAPI float getLerpedValue() const; // NOLINT
    /**
     * @symbol ?selectCellXZ\@NoiseCellInterpolator\@\@QEAAXHHHH\@Z
     */
    MCAPI void selectCellXZ(int, int, int, int); // NOLINT
    /**
     * @symbol ?updateForX\@NoiseCellInterpolator\@\@QEAAXE\@Z
     */
    MCAPI void updateForX(unsigned char); // NOLINT
    /**
     * @symbol ?updateForZ\@NoiseCellInterpolator\@\@QEAAXE\@Z
     */
    MCAPI void updateForZ(unsigned char); // NOLINT
};
