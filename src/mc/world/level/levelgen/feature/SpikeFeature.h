#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/phys/AABB.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SpikeFeature : public ::Feature {
public:
    // SpikeFeature inner types declare
    // clang-format off
    class EndSpike;
    // clang-format on

    // SpikeFeature inner types define
    class EndSpike {
    public:
        int const  mCenterX;
        int const  mCenterZ;
        int const  mRadius;
        int const  mHeight;
        bool const mGuarded;
        AABB const mTopBoundingBox;

    public:
        // prevent constructor by default
        EndSpike& operator=(EndSpike const&);
        EndSpike(EndSpike const&);
        EndSpike();

    public:
        // NOLINTBEGIN
        MCAPI EndSpike(int centerX, int centerZ, int radius, int height, bool guarded);

        MCAPI int getCenterX() const;

        MCAPI int getCenterZ() const;

        MCAPI int getHeight() const;

        MCAPI class AABB getTopBoundingBox() const;

        MCAPI bool startsInChunk(class BlockPos const& chunkOrigin) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(int centerX, int centerZ, int radius, int height, bool guarded);

        // NOLINTEND
    };

public:
    EndSpike const& mSpike;
    BlockPos        mCrystalBeamTarget;
    bool            mCrystalInvulnerable;

public:
    // prevent constructor by default
    SpikeFeature& operator=(SpikeFeature const&);
    SpikeFeature(SpikeFeature const&);
    SpikeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpikeFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI explicit SpikeFeature(class SpikeFeature::EndSpike const& spike);

    MCAPI bool
    placeManually(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor* placer);

    MCAPI void postProcessMobsAt(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI void setCrystalBeamTarget(class BlockPos const& target);

    MCAPI void setCrystalInvulnerable(bool invulnerable);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class SpikeFeature::EndSpike const& spike);

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
