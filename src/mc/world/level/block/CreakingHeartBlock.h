#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CreakingHeartBlock : public ::ActorBlockBase<::RotatedPillarBlock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 50
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    // vIndex: 86
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 88
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 132
    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 104
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 105
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 99
    virtual void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CreakingHeartBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI void $executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
