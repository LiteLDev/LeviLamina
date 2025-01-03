#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
class Random;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class FenceGateBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 73
    virtual bool ignoreEntitiesOnPistonMove(::Block const& block) const /*override*/;

    // vIndex: 25
    virtual bool canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const /*override*/;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    // vIndex: 33
    virtual bool isFenceGateBlock() const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 149
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    // vIndex: 0
    virtual ~FenceGateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FenceGateBlock(::std::string const& nameId, int id, ::WoodType woodType);

    MCAPI void _setOpen(
        ::BlockSource&                  region,
        ::gsl::not_null<::Block const*> block,
        ::BlockPos const&               pos,
        ::Player*                       player,
        bool                            shouldBeOpen
    ) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void resolveIsInWall(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const&
    _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue, bool isCollisionShape);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::WoodType woodType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI bool $isInteractiveBlock() const;

    MCAPI bool $ignoreEntitiesOnPistonMove(::Block const& block) const;

    MCAPI bool $canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const;

    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $isFenceGateBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
