#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class LecternBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    LecternBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual bool isSignalSource() const /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool requiresLegacyRedstoneSetup() const /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LecternBlock(::std::string const& nameId, int id);

    MCNAPI void emitRedstonePulse(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $requiresLegacyRedstoneSetup() const;

    MCNAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
