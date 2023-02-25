/**
 * @file  SurfaceMaterialAdjustmentAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SurfaceMaterialAdjustmentAttributes.
 *
 */
struct SurfaceMaterialAdjustmentAttributes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALADJUSTMENTATTRIBUTES
public:
    struct SurfaceMaterialAdjustmentAttributes& operator=(struct SurfaceMaterialAdjustmentAttributes const &) = delete;
    SurfaceMaterialAdjustmentAttributes(struct SurfaceMaterialAdjustmentAttributes const &) = delete;
    SurfaceMaterialAdjustmentAttributes() = delete;
#endif

public:
    /**
     * @symbol  ?evaluateAdjustments\@SurfaceMaterialAdjustmentAttributes\@\@QEBA?AUSurfaceMaterialAdjustmentEvaluated\@\@AEAVRenderParams\@\@V?$not_null\@PEAVPerlinSimplexNoise\@\@\@gsl\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI struct SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(class RenderParams &, class gsl::not_null<class PerlinSimplexNoise *>, class BlockPos const &, int, int) const;
    /**
     * @symbol  ??4SurfaceMaterialAdjustmentAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SurfaceMaterialAdjustmentAttributes & operator=(struct SurfaceMaterialAdjustmentAttributes &&);
    /**
     * @symbol  ?parseExpressionNodeFloat\@SurfaceMaterialAdjustmentAttributes\@\@QEAAXAEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAVExpressionNode\@\@M\@Z
     */
    MCAPI void parseExpressionNodeFloat(class CompoundTag const &, std::string const &, std::string const &, class ExpressionNode &, float);
    /**
     * @symbol  ??1SurfaceMaterialAdjustmentAttributes\@\@QEAA\@XZ
     */
    MCAPI ~SurfaceMaterialAdjustmentAttributes();

};