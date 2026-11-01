#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CrackingIceBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class EntityContext;
class ItemInstance;
class Random;
// clang-format on

class FrostedIceBlock : public ::CrackingIceBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool _shouldEnvironmentIncreaseCracking(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Random&         random
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $_shouldEnvironmentIncreaseCracking(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Random&         random
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
