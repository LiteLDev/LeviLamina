#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Experiments;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class FallingBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 148
    virtual ::mce::Color getDustColor(::Block const&) const = 0;

    // vIndex: 149
    virtual ::std::string getDustParticleName(::Block const&) const = 0;

    // vIndex: 150
    virtual bool falling() const;

    // vIndex: 151
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 152
    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 153
    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~FallingBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _scheduleCheck(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, int delay) const;

    MCNAPI void _tickBlocksAround2D(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock) const;

    MCNAPI void checkSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI bool $falling() const;

    MCNAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND
};
