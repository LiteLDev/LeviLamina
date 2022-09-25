/**
 * @file  SurfaceMaterialAdjustmentEvaluated.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2026334054
     * @symbol ?empty@SurfaceMaterialAdjustmentEvaluated@@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   2083479757
     * @symbol ?makeAdjustments@SurfaceMaterialAdjustmentEvaluated@@QEBAXAEAUSurfaceMaterialBlocks@@H@Z
     */
    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks &, int) const;
    /**
     * @hash   -1261221788
     * @symbol ??1SurfaceMaterialAdjustmentEvaluated@@QEAA@XZ
     */
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();

};