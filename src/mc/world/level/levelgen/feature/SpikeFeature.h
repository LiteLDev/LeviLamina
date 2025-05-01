#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Random;
// clang-format on

class SpikeFeature : public ::Feature {
public:
    // SpikeFeature inner types declare
    // clang-format off
    class EndSpike;
    // clang-format on

    // SpikeFeature inner types define
    class EndSpike {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>     mCenterX;
        ::ll::TypedStorage<4, 4, int const>     mCenterZ;
        ::ll::TypedStorage<4, 4, int const>     mRadius;
        ::ll::TypedStorage<4, 4, int const>     mHeight;
        ::ll::TypedStorage<1, 1, bool const>    mGuarded;
        ::ll::TypedStorage<4, 24, ::AABB const> mTopBoundingBox;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SpikeFeature::EndSpike const&> mSpike;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mCrystalBeamTarget;
    ::ll::TypedStorage<1, 1, bool>                            mCrystalInvulnerable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~SpikeFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void postProcessMobsAt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
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
