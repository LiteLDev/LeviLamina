#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/WoodType.h"

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
    getCollisionShape(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

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
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI FenceGateBlock(std::string const& nameId, int id, ::WoodType);

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

    MCAPI static class AABB const&
    _getShape(class BlockPos const& pos, class Block const& block, class AABB& bufferValue, bool isCollisionShape);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::WoodType);

    MCAPI void _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI bool canConnect$(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI class AABB
    getCollisionShape$(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool getLiquidClipVolume$(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const&, uchar, class Vec3 const&, int) const;

    MCAPI bool ignoreEntitiesOnPistonMove$(class Block const& block) const;

    MCAPI bool isFenceGateBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
