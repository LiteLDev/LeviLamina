#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class HashedString;
class Player;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CrackingIceBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&> mOnDestroyBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    CrackingIceBlock& operator=(CrackingIceBlock const&);
    CrackingIceBlock(CrackingIceBlock const&);
    CrackingIceBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual bool _shouldActorIncreaseCracking(::Actor const&, ::BlockPos const&) const;

    virtual bool _shouldEnvironmentIncreaseCracking(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Random&         random
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _increaseCracking(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool propagate) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $_shouldActorIncreaseCracking(::Actor const&, ::BlockPos const&) const;


    // NOLINTEND
};
