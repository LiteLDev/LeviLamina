#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
        // prevent constructor by default
        EndSpike();

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
    // prevent constructor by default
    SpikeFeature& operator=(SpikeFeature const&);
    SpikeFeature(SpikeFeature const&);
    SpikeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpikeFeature(::SpikeFeature::EndSpike const& spike);

    MCAPI bool placeManually(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::Actor* placer);

    MCAPI void postProcessMobsAt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD void setCrystalBeamTarget(::BlockPos const& target);

    MCFOLD void setCrystalInvulnerable(bool invulnerable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpikeFeature::EndSpike const& spike);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
