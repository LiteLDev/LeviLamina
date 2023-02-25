/**
 * @file  SurfaceMaterialAdjustmentEvaluated.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SurfaceMaterialAdjustmentEvaluated.
 *
 */
struct SurfaceMaterialAdjustmentEvaluated {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALADJUSTMENTEVALUATED
public:
    struct SurfaceMaterialAdjustmentEvaluated& operator=(struct SurfaceMaterialAdjustmentEvaluated const &) = delete;
    SurfaceMaterialAdjustmentEvaluated(struct SurfaceMaterialAdjustmentEvaluated const &) = delete;
    SurfaceMaterialAdjustmentEvaluated() = delete;
#endif

public:
    /**
     * @symbol  ?empty\@SurfaceMaterialAdjustmentEvaluated\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol  ?makeAdjustments\@SurfaceMaterialAdjustmentEvaluated\@\@QEBAXAEAUSurfaceMaterialBlocks\@\@H\@Z
     */
    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks &, int) const;
    /**
     * @symbol  ??1SurfaceMaterialAdjustmentEvaluated\@\@QEAA\@XZ
     */
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();

};