#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoiseCellInterpolator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOISECELLINTERPOLATOR
public:
    NoiseCellInterpolator& operator=(NoiseCellInterpolator const&) = delete;
    NoiseCellInterpolator(NoiseCellInterpolator const&)            = delete;
    NoiseCellInterpolator()                                        = delete;
#endif

public:
    /**
     * @symbol ??0NoiseCellInterpolator\@\@QEAA\@V?$span\@$$CBM$0?0\@gsl\@\@HH\@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>, int, int);
    /**
     * @symbol ??0NoiseCellInterpolator\@\@QEAA\@V?$span\@$$CBM$0?0\@gsl\@\@\@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>);
    /**
     * @symbol ?getLerpedValue\@NoiseCellInterpolator\@\@QEBAMXZ
     */
    MCAPI float getLerpedValue() const;
    /**
     * @symbol ?selectCellXZ\@NoiseCellInterpolator\@\@QEAAXHHHH\@Z
     */
    MCAPI void selectCellXZ(int, int, int, int);
    /**
     * @symbol ?updateForX\@NoiseCellInterpolator\@\@QEAAXE\@Z
     */
    MCAPI void updateForX(unsigned char);
    /**
     * @symbol ?updateForZ\@NoiseCellInterpolator\@\@QEAAXE\@Z
     */
    MCAPI void updateForZ(unsigned char);
};
