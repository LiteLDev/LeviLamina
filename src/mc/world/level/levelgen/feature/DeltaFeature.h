#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class DeltaFeature : public ::Feature {
public:
    // prevent constructor by default
    DeltaFeature& operator=(DeltaFeature const&);
    DeltaFeature(DeltaFeature const&);
    DeltaFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& centerPos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~DeltaFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isValidPlacement(::BlockSource& region, ::BlockPos cursor) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& centerPos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
