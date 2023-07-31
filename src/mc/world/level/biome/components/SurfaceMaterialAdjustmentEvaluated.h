#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAdjustmentEvaluated {

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentEvaluated& operator=(SurfaceMaterialAdjustmentEvaluated const&) = delete;
    SurfaceMaterialAdjustmentEvaluated(SurfaceMaterialAdjustmentEvaluated const&)            = delete;
    SurfaceMaterialAdjustmentEvaluated()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?empty\@SurfaceMaterialAdjustmentEvaluated\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?makeAdjustments\@SurfaceMaterialAdjustmentEvaluated\@\@QEBAXAEAUSurfaceMaterialBlocks\@\@H\@Z
     */
    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks&, int) const;
    /**
     * @symbol ??1SurfaceMaterialAdjustmentEvaluated\@\@QEAA\@XZ
     */
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();
    // NOLINTEND
};
