#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Player;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class TurtleEggBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb5fd4;
    // NOLINTEND

public:
    // prevent constructor by default
    TurtleEggBlock& operator=(TurtleEggBlock const&);
    TurtleEggBlock(TurtleEggBlock const&);
    TurtleEggBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 150
    virtual void entityInside(::BlockSource&, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    // vIndex: 60
    virtual void transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, float fallDistance) const
        /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~TurtleEggBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TurtleEggBlock(::std::string const& nameId, int id);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $entityInside(::BlockSource&, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, float fallDistance) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
