#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/DiodeBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class RepeaterBlock : public ::DiodeBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 148
    virtual bool isLocked(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 70
    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const /*override*/;

    // vIndex: 158
    virtual int getTurnOnDelay(::Block const& block) const /*override*/;

    // vIndex: 159
    virtual ::Block const* getOnBlock(::Block const* block) const /*override*/;

    // vIndex: 160
    virtual ::Block const* getOffBlock(::Block const* block) const /*override*/;

    // vIndex: 154
    virtual bool isAlternateInput(::Block const& block) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~RepeaterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI void updateDelay(::BlockSource& region, ::BlockPos const& pos, bool doIncrement) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<int const[]> DELAYS();

    MCNAPI static ::std::add_lvalue_reference_t<float const[]> DELAY_RENDER_OFFSETS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $isLocked(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCNAPI int $getTurnOnDelay(::Block const& block) const;

    MCNAPI ::Block const* $getOnBlock(::Block const* block) const;

    MCNAPI ::Block const* $getOffBlock(::Block const* block) const;

    MCNAPI bool $isAlternateInput(::Block const& block) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
