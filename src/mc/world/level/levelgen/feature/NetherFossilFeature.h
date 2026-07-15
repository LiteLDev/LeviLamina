#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class HashedString;
class Random;
// clang-format on

class NetherFossilFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mValidGroundBlocks;
    ::ll::TypedStorage<1, 1, bool>                           mMayPlaceInLava;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
