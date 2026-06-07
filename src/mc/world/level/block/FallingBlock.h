#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class FallingBlock : public ::BlockType {
public:
    // prevent constructor by default
    FallingBlock();

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
    MCAPI FallingBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _tickBlocksAround2D(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock) const;

    MCAPI void checkSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void triggerFallCheck(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
