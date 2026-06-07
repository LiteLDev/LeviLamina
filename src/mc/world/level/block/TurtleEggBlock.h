#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Player;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TurtleEggBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mShapeOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    TurtleEggBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void entityInside(::BlockSource& pos, ::BlockPos const& entity, ::Actor&) const /*override*/;

    virtual void transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, float fallDistance) const
        /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TurtleEggBlock(::std::string const& nameId, int id);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const&
    _decreaseEggs(::BlockSource& region, ::BlockPos const& pos, uint count, bool brokenWithSilkTouch);

    MCAPI static void
    _destroyEgg(::BlockSource& region, ::BlockPos const& pos, ::Actor& actor, int randomness, bool brokenWithSilkTouch);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $entityInside(::BlockSource& pos, ::BlockPos const& entity, ::Actor&) const;

    MCAPI void $transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, float fallDistance) const;

    MCFOLD bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCFOLD ::std::string $buildDescriptionId(::Block const&) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
