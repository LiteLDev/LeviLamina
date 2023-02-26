/**
 * @file  LiquidPhysicsSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidPhysicsSystemImpl.
 *
 */
class LiquidPhysicsSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDPHYSICSSYSTEMIMPL
public:
    class LiquidPhysicsSystemImpl& operator=(class LiquidPhysicsSystemImpl const &) = delete;
    LiquidPhysicsSystemImpl(class LiquidPhysicsSystemImpl const &) = delete;
    LiquidPhysicsSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_applyFlow\@LiquidPhysicsSystemImpl\@\@SAXAEAUStateVectorComponent\@\@VVec3\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static void _applyFlow(struct StateVectorComponent &, class Vec3, enum class MaterialType);
    /**
     * @symbol  ?_getLiquidBlocksInAABB\@LiquidPhysicsSystemImpl\@\@SAXAEAV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@AEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static void _getLiquidBlocksInAABB(std::vector<struct LiquidBlockEntry> &, class IConstBlockSource const &, class AABB const &, enum class MaterialType);
    /**
     * @symbol  ?_hasAdjacentFlowingBlock\@LiquidPhysicsSystemImpl\@\@SA_NAEBV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool _hasAdjacentFlowingBlock(std::vector<struct LiquidBlockEntry> const &, class IConstBlockSource const &, enum class MaterialType);
    /**
     * @symbol  ?_hasFlowingBlock\@LiquidPhysicsSystemImpl\@\@SA_NAEBV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool _hasFlowingBlock(std::vector<struct LiquidBlockEntry> const &);

};