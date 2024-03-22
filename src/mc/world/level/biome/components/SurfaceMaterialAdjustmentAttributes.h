#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeComponentBase.h"

struct SurfaceMaterialAdjustmentAttributes : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentAttributes& operator=(SurfaceMaterialAdjustmentAttributes const&);
    SurfaceMaterialAdjustmentAttributes(SurfaceMaterialAdjustmentAttributes const&);
    SurfaceMaterialAdjustmentAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SurfaceMaterialAdjustmentAttributes@@UEAA@XZ
    virtual ~SurfaceMaterialAdjustmentAttributes() = default;

    // symbol:
    // ?evaluateAdjustments@SurfaceMaterialAdjustmentAttributes@@QEBA?AUSurfaceMaterialAdjustmentEvaluated@@AEAVRenderParams@@V?$not_null@PEAVPerlinSimplexNoise@@@gsl@@AEBVBlockPos@@HH@Z
    MCAPI struct SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(
        class RenderParams&                      molangParams,
        gsl::not_null<class PerlinSimplexNoise*> noise,
        class BlockPos const&                    pos,
        int,
        int
    ) const;

    // symbol: ??4SurfaceMaterialAdjustmentAttributes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SurfaceMaterialAdjustmentAttributes& operator=(struct SurfaceMaterialAdjustmentAttributes&&);

    // symbol:
    // ?parseExpressionNodeFloat@SurfaceMaterialAdjustmentAttributes@@QEAAXAEBVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEAVExpressionNode@@M@Z
    MCAPI void parseExpressionNodeFloat(
        class CompoundTag const& tag,
        std::string const&       tagName,
        std::string const&,
        class ExpressionNode& node,
        float                 defaultValue
    );

    // NOLINTEND
};
