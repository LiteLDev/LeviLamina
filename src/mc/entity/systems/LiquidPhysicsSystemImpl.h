#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LiquidPhysicsSystemImpl {

public:
    // prevent constructor by default
    LiquidPhysicsSystemImpl& operator=(LiquidPhysicsSystemImpl const&) = delete;
    LiquidPhysicsSystemImpl(LiquidPhysicsSystemImpl const&)            = delete;
    LiquidPhysicsSystemImpl()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_applyFlow\@LiquidPhysicsSystemImpl\@\@SAXAEAUStateVectorComponent\@\@VVec3\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static void _applyFlow(struct StateVectorComponent&, class Vec3, enum class MaterialType);
    /**
     * @symbol
     * ?_hasAdjacentFlowingBlock\@LiquidPhysicsSystemImpl\@\@SA_NAEBV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool _hasAdjacentFlowingBlock(
        std::vector<struct LiquidBlockEntry> const&,
        class IConstBlockSource const&,
        enum class MaterialType
    );
    /**
     * @symbol
     * ?_hasFlowingBlock\@LiquidPhysicsSystemImpl\@\@SA_NAEBV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool _hasFlowingBlock(std::vector<struct LiquidBlockEntry> const&);
    // NOLINTEND
};
