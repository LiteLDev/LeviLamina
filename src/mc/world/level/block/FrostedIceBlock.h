#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
class Player;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FrostedIceBlock : public ::BlockType {
public:
    // prevent constructor by default
    FrostedIceBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FrostedIceBlock(::std::string const& nameId, int id, bool packed);

    MCAPI int _countNeighbors(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void _slightlyMelt(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool propagate) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool packed);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
