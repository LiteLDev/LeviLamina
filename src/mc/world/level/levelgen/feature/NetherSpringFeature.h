#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class NetherSpringFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95b2fc;
    ::ll::UntypedStorage<1, 1> mUnk4595c4;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherSpringFeature& operator=(NetherSpringFeature const&);
    NetherSpringFeature(NetherSpringFeature const&);
    NetherSpringFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~NetherSpringFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherSpringFeature(::Block const& block, bool insideRock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const& block, bool insideRock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
