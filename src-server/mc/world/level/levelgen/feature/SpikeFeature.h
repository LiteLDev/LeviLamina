#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/versionless/world/phys/AABB.h"
#include "mc/world/level/levelgen/feature/Feature.h"

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
        ::ll::TypedStorage<4, 4, int const> mCenterX;
        ::ll::TypedStorage<4, 4, int const> mCenterZ;
        ::ll::TypedStorage<4, 4, int const> mRadius;
        ::ll::TypedStorage<4, 4, int const> mHeight;
        ::ll::TypedStorage<1, 1, bool const> mGuarded;
        ::ll::TypedStorage<4, 24, ::AABB const> mTopBoundingBox;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SpikeFeature::EndSpike const&> mSpike;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCrystalBeamTarget;
    ::ll::TypedStorage<1, 1, bool> mCrystalInvulnerable;
    // NOLINTEND

public:
    // prevent constructor by default
    SpikeFeature& operator=(SpikeFeature const&);
    SpikeFeature(SpikeFeature const&);
    SpikeFeature();

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
    MCAPI void postProcessMobsAt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
