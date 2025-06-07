#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
class Player;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FrostedIceBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 88
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 83
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~FrostedIceBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _slightlyMelt(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool propagate) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
