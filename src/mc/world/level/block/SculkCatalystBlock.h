#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Material;
class Random;
// clang-format on

class SculkCatalystBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // prevent constructor by default
    SculkCatalystBlock& operator=(SculkCatalystBlock const&);
    SculkCatalystBlock(SculkCatalystBlock const&);
    SculkCatalystBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~SculkCatalystBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SculkCatalystBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bloom(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Random&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
