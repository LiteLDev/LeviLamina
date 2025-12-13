#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

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

class FallingBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const = 0;

    virtual ::std::string getDustParticleName(::Block const&) const = 0;

    virtual bool falling() const;

    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~FallingBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _scheduleCheck(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, int delay) const;

    MCAPI void _tickBlocksAround2D(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock) const;

    MCAPI void checkSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $falling() const;

    MCFOLD void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND
};
