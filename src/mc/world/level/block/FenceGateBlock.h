#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WoodType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FenceGateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FenceGateBlock& operator=(FenceGateBlock const&);
    FenceGateBlock(FenceGateBlock const&);
    FenceGateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FenceGateBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 35
    virtual bool isFenceGateBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 79
    virtual bool ignoreEntitiesOnPistonMove(class Block const& block) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    MCAPI FenceGateBlock(std::string const& nameId, int id, ::WoodType woodType);

    MCAPI void resolveIsInWall(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onOpenChanged(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _setOpen(
        class BlockSource&                region,
        gsl::not_null<class Block const*> block,
        class BlockPos const&             pos,
        class Player*                     player,
        bool                              shouldBeOpen
    ) const;

    MCAPI static class AABB const& _getShape(class BlockPos const&, class Block const&, class AABB&, bool);

    // NOLINTEND
};
