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
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool isLocked(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const /*override*/;

    virtual int getTurnOnDelay(::Block const& block) const /*override*/;

    virtual ::Block const* getOnBlock(::Block const* block) const /*override*/;

    virtual ::Block const* getOffBlock(::Block const* block) const /*override*/;

    virtual bool isAlternateInput(::Block const& block) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~RepeaterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void updateDelay(::BlockSource& region, ::BlockPos const& pos, bool doIncrement) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<int const[]> DELAYS();

    MCAPI static ::std::add_lvalue_reference_t<float const[]> DELAY_RENDER_OFFSETS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $isLocked(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCAPI int $getTurnOnDelay(::Block const& block) const;

    MCAPI ::Block const* $getOnBlock(::Block const* block) const;

    MCAPI ::Block const* $getOffBlock(::Block const* block) const;

    MCAPI bool $isAlternateInput(::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
