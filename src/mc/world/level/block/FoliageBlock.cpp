#include "mc/world/level/block/FoliageBlock.h"

#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/material/Material.h"
#include "mc/world/phys/AABB.h"

FoliageBlock::FoliageBlock(::std::string const& nameId, int id)
: BlockType(nameId, id, ::Material::getMaterial(::SharedTypes::v1_26_20::MaterialType::Plant)) {
    // The original constructor also calls
    // `BlockType::_subscribeForEvent<BlockEvents::BlockQueuedTickEvent, FoliageBlock>(&FoliageBlock::tick, false)`,
    // whose event plumbing (`BlockEventManager::_getOrAddExecutor` and the publisher subscribe path) is not restored.
    mVisualShape        = ::AABB(::Vec3(0.15f, 0.0f, 0.15f), ::Vec3(0.7f, 0.6f, 0.7f));
    mLightBlock->mValue = 0;
    mSolid              = false;
    mPushesOutItems     = false;
    mIsOpaqueFullBlock  = false;
    mRenderLayer        = ::BlockRenderLayer::RenderlayerAlphatestSingleSide;
    mProperties         = ::BlockProperty::None;
    mTranslucency       = 1.0f;
}
