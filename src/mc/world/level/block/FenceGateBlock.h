#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"
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
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class FenceGateBlock : public ::BlockType {
public:
    // prevent constructor by default
    FenceGateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool ignoreEntitiesOnPistonMove(::Block const& block) const /*override*/;

    virtual bool isFenceGateBlock() const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FenceGateBlock(::std::string const& nameId, int id, ::WoodType);

    MCAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void resolveIsInWall(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _onSetupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::WoodType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI bool $ignoreEntitiesOnPistonMove(::Block const& block) const;

    MCFOLD bool $isFenceGateBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
