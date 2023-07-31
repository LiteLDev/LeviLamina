#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAdjustmentAttributes {

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentAttributes& operator=(SurfaceMaterialAdjustmentAttributes const&) = delete;
    SurfaceMaterialAdjustmentAttributes(SurfaceMaterialAdjustmentAttributes const&)            = delete;
    SurfaceMaterialAdjustmentAttributes()                                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?evaluateAdjustments\@SurfaceMaterialAdjustmentAttributes\@\@QEBA?AUSurfaceMaterialAdjustmentEvaluated\@\@AEAVRenderParams\@\@V?$not_null\@PEAVPerlinSimplexNoise\@\@\@gsl\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI struct SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(
        class RenderParams&,
        class gsl::not_null<class PerlinSimplexNoise*>,
        class BlockPos const&,
        int,
        int
    ) const;
    /**
     * @symbol ??4SurfaceMaterialAdjustmentAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SurfaceMaterialAdjustmentAttributes& operator=(struct SurfaceMaterialAdjustmentAttributes&&);
    /**
     * @symbol
     * ?parseExpressionNodeFloat\@SurfaceMaterialAdjustmentAttributes\@\@QEAAXAEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAVExpressionNode\@\@M\@Z
     */
    MCAPI void parseExpressionNodeFloat(
        class CompoundTag const&,
        std::string const&,
        std::string const&,
        class ExpressionNode&,
        float
    );
    // NOLINTEND
};
