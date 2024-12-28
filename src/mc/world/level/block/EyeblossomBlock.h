#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FlowerBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class EyeblossomBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    EyeblossomBlock& operator=(EyeblossomBlock const&);
    EyeblossomBlock(EyeblossomBlock const&);
    EyeblossomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 124
    virtual void animateTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 150
    virtual void entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const /*override*/;

    // vIndex: 0
    virtual ~EyeblossomBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EyeblossomBlock(::std::string const& nameId, int id);

    MCAPI void _tryPlayAmbientSound(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void
    _updateEyeblossomState(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool isMainBlock) const;
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
    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
