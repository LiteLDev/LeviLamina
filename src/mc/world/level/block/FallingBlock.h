#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class FallingBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual ::mce::Color getDustColor(::Block const& block) const = 0;

    virtual ::std::string getDustParticleName(::Block const& block) const = 0;

    virtual bool falling() const;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _tickBlocksAround2D(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock) const;

    MCNAPI void checkSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
