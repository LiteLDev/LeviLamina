#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class RedstoneTorchBlock : public ::TorchBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // prevent constructor by default
    RedstoneTorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool requiresLegacyRedstoneSetup() const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual int getTickDelay();

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool isSignalSource() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedstoneTorchBlock(::std::string const& nameId, int id, bool on);

    MCAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCNAPI void onPlaceRedstoneTorchBlock(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, bool on);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $requiresLegacyRedstoneSetup() const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI int $getTickDelay();

    MCNAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
