#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Experiments;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TargetBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 44
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 16
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~TargetBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _processHitByProjectileAtPos(
        ::Vec3 const&     hitPos,
        ::BlockSource&    region,
        ::BlockPos const& blockPos,
        ::Actor const&    projectile
    ) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
