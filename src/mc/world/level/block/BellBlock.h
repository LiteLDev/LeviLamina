#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BellBlock : public ::ActorBlockBase<::BlockType> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 146
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& actor) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 64
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 16
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 24
    virtual bool canConnect(::Block const&, uchar, ::Block const&) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 145
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const
        /*override*/;

    // vIndex: 0
    virtual ~BellBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const&
    _determineAttachment(::Actor const& by, ::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI short _getItemId(::BlockSource const& region, ::std::string_view itemName) const;

    MCAPI void _sendBellUsedEventToClient(::BlockSource const& region, ::Actor const& sourceActor) const;

    MCAPI void _tryAttachToNeighbors(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::BlockPos const& neighborPos,
        int               updateFlags
    ) const;

    MCAPI bool hasValidAttachment(::Block const& block, ::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& actor) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $canConnect(::Block const&, uchar, ::Block const&) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
