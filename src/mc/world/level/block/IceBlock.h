#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Player;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class IceBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPacked;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual bool canBeOriginalSurface(bool aboveSeaLevel) const /*override*/;

    virtual ~IceBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& _getMeltedBlockAndSendEvents(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI bool $canBeOriginalSurface(bool aboveSeaLevel) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
