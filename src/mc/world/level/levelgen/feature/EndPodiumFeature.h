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

class EndPodiumFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb86daf;
    // NOLINTEND

public:
    // prevent constructor by default
    EndPodiumFeature& operator=(EndPodiumFeature const&);
    EndPodiumFeature(EndPodiumFeature const&);
    EndPodiumFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~EndPodiumFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EndPodiumFeature(bool active);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& CORNER_ROUNDING();

    MCAPI static ::BlockPos const& END_PODIUM_CHUNK_POSITION();

    MCAPI static ::BlockPos const& END_PODIUM_LOCATION();

    MCAPI static int const& PODIUM_PILLAR_HEIGHT();

    MCAPI static int const& PODIUM_RADIUS();

    MCAPI static int const& RIM_RADIUS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool active);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
