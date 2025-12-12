#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class RedstoneLampBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsLit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~RedstoneLampBlock() /*override*/ = default;
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
    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
