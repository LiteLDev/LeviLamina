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

class EyeblossomFeature : public ::Feature {
public:
    // prevent constructor by default
    EyeblossomFeature& operator=(EyeblossomFeature const&);
    EyeblossomFeature(EyeblossomFeature const&);
    EyeblossomFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EyeblossomFeature() /*override*/;

    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
