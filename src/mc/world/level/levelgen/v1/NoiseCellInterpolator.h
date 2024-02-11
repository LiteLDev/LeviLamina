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
    // symbol: ??0NoiseCellInterpolator@@QEAA@V?$span@$$CBM$0?0@gsl@@@Z
    MCAPI explicit NoiseCellInterpolator(gsl::span<float const> noiseBuffer);

    // symbol: ??0NoiseCellInterpolator@@QEAA@V?$span@$$CBM$0?0@gsl@@HH@Z
    MCAPI NoiseCellInterpolator(gsl::span<float const> noiseBuffer, int, int);

    // symbol: ?getLerpedValue@NoiseCellInterpolator@@QEBAMXZ
    MCAPI float getLerpedValue() const;

    // symbol: ?selectCellXZ@NoiseCellInterpolator@@QEAAXHHHH@Z
    MCAPI void selectCellXZ(int, int, int, int);

    // symbol: ?updateForX@NoiseCellInterpolator@@QEAAXE@Z
    MCAPI void updateForX(uchar x);

    // symbol: ?updateForZ@NoiseCellInterpolator@@QEAAXE@Z
    MCAPI void updateForZ(uchar z);

    // NOLINTEND
};
