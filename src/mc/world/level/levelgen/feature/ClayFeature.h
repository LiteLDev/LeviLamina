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

class ClayFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk84065c;
    // NOLINTEND

public:
    // prevent constructor by default
    ClayFeature& operator=(ClayFeature const&);
    ClayFeature(ClayFeature const&);
    ClayFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~ClayFeature() /*override*/ = default;
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
