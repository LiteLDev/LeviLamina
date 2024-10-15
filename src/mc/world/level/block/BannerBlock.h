#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BannerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BannerBlock& operator=(BannerBlock const&);
    BannerBlock(BannerBlock const&);
    BannerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB&) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BannerBlock(std::string const& nameId, int id, bool onGround);

    MCAPI static class ItemInstance itemInstanceFromBlockEntity(gsl::not_null<class BannerBlockActor const*> banner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool onGround);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const* blockActor) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB&) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI static class AABB& EAST_AABB();

    MCAPI static class AABB& NORTH_AABB();

    MCAPI static class AABB& SOUTH_AABB();

    MCAPI static class AABB& STANDING_AABB();

    MCAPI static class AABB& WEST_AABB();

    // NOLINTEND
};
