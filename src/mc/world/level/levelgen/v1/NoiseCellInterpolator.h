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
    MCAPI explicit NoiseCellInterpolator(gsl::span<float const>);

    MCAPI NoiseCellInterpolator(gsl::span<float const>, int, int);

    MCAPI float getLerpedValue() const;

    MCAPI void selectCellXZ(int xzMinMinIdx, int xzMinMaxIdx, int xzMaxMinIdx, int xzMaxMaxIdx);

    MCAPI void updateForX(uchar x);

    MCAPI void updateForZ(uchar z);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
