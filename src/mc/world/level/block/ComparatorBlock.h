#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ComparatorBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const /*override*/;

    virtual bool isSignalSource() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~ComparatorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _installCircuit(::BlockSource& region, ::BlockPos const& pos, bool loading) const;

    MCAPI void _refreshOutputState(::BlockSource& region, ::BlockPos const& pos, int strength) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getVariant(::Block const& block) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
