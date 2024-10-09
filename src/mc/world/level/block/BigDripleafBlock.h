#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BigDripleafBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BigDripleafBlock& operator=(BigDripleafBlock const&);
    BigDripleafBlock(BigDripleafBlock const&);
    BigDripleafBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BigDripleafBlock() = default;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 17
    virtual void onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const&) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 66
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI BigDripleafBlock(std::string const& nameId, int id);

    MCAPI static void
    placeWithRandomHeight(class BlockSource& region, class Random& random, class BlockPos stemPos, int facing);

    MCAPI static int const MAX_DRIPLEAF_GROWTH_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class BlockPos _findHeadPos(class BlockSource& region, class BlockPos pos) const;

    MCAPI void _resetTilt(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    _setTiltAndScheduleTick(::BigDripleafTilt bigDripleafTilt, class BlockSource& region, class BlockPos const& pos)
        const;

    // NOLINTEND
};
