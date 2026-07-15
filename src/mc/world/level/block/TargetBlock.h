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
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TargetBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isSignalSource() const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
