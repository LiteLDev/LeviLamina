#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAdjustmentEvaluated {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALADJUSTMENTEVALUATED
public:
    SurfaceMaterialAdjustmentEvaluated& operator=(SurfaceMaterialAdjustmentEvaluated const&) = delete;
    SurfaceMaterialAdjustmentEvaluated(SurfaceMaterialAdjustmentEvaluated const&)            = delete;
    SurfaceMaterialAdjustmentEvaluated()                                                     = delete;
#endif

public:
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
};
