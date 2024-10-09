#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAdjustmentAttributes {
public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentAttributes& operator=(SurfaceMaterialAdjustmentAttributes const&);
    SurfaceMaterialAdjustmentAttributes(SurfaceMaterialAdjustmentAttributes const&);
    SurfaceMaterialAdjustmentAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentAttributes() = default;

    MCAPI struct SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(
        class RenderParams&                      molangParams,
        gsl::not_null<class PerlinSimplexNoise*> noise,
        class BlockPos const&                    pos,
        int                                      heightMin,
        int                                      heightMax
    ) const;

    MCAPI void parseExpressionNodeFloat(
        class CompoundTag const& tag,
        std::string const&       tagName,
        std::string const&       tagNameType,
        class ExpressionNode&    node,
        float                    defaultValue
    );

    // NOLINTEND
};
