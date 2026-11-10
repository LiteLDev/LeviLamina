#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CommandBlockActor;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class CommandBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CommandBlockMode> mCBMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInteractiveBlock() const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canInstatick() const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _executeChainBlock(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::CommandBlockActor& blockActor,
        bool                 fromTickQueue
    ) const;

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI void
    updateBlock(::BlockSource& region, ::BlockPos const& pos, ::CommandBlockMode newMode, bool conditional) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _executeChain(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<int[]> mCBModeMap();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canInstatick() const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
