#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAdjustmentEvaluated {
public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentEvaluated& operator=(SurfaceMaterialAdjustmentEvaluated const&);
    SurfaceMaterialAdjustmentEvaluated(SurfaceMaterialAdjustmentEvaluated const&);
    SurfaceMaterialAdjustmentEvaluated();

public:
    // NOLINTBEGIN
    MCAPI bool empty() const;

    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks& blockPalette, int height) const;

    MCAPI ~SurfaceMaterialAdjustmentEvaluated();

    // NOLINTEND
};
