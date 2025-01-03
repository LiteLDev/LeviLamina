#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class EntityContext;
class ItemInstance;
class Player;
class Random;
// clang-format on

class RedStoneOreBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 95
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 151
    virtual void _lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 0
    virtual ~RedStoneOreBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RedStoneOreBlock(::std::string const& nameId, int id, bool lit);

    MCAPI void _poofParticles(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool lit);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $canBeOriginalSurface() const;

    MCAPI void $_lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
