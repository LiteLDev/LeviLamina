#include "mc/world/level/block/BushBlock.h"

#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/phys/AABB.h"

BushBlock::BushBlock(::std::string const& nameId, int id) : FoliageBlock(nameId, id) {
    mVisualShape = ::AABB(::Vec3(0.0f, 0.0f, 0.0f), ::Vec3(1.0f, 0.8f, 1.0f));
    mRenderLayer = ::BlockRenderLayer::RenderlayerAlphatestSingleSide;
}
