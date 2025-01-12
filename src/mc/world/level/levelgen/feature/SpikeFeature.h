#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockPos;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EndSpike(int centerX, int centerZ, int radius, int height, bool guarded);

        MCFOLD int getCenterX() const;

        MCFOLD int getCenterZ() const;

        MCFOLD int getHeight() const;

        MCAPI ::AABB getTopBoundingBox() const;

        MCAPI bool startsInChunk(::BlockPos const& chunkOrigin) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(int centerX, int centerZ, int radius, int height, bool guarded);
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
    MCAPI explicit SpikeFeature(::SpikeFeature::EndSpike const& spike);

    MCAPI bool placeManually(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::Actor* placer);

    MCAPI void postProcessMobsAt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void setCrystalBeamTarget(::BlockPos const& target);

    MCAPI void setCrystalInvulnerable(bool invulnerable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpikeFeature::EndSpike const& spike);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
