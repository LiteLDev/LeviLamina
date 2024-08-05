#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoiseCellInterpolator {
public:
    // prevent constructor by default
    NoiseCellInterpolator& operator=(NoiseCellInterpolator const&);
    NoiseCellInterpolator(NoiseCellInterpolator const&);
    NoiseCellInterpolator();

public:
    // NOLINTBEGIN
    MCAPI explicit NoiseCellInterpolator(gsl::span<float const> noiseBuffer);

    MCAPI NoiseCellInterpolator(gsl::span<float const> noiseBuffer, int, int);

    MCAPI float getLerpedValue() const;

    MCAPI void selectCellXZ(int, int, int, int);

    MCAPI void updateForX(uchar x);

    MCAPI void updateForZ(uchar z);

    // NOLINTEND
};
