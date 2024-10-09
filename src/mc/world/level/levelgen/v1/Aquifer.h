#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Aquifer {
public:
    // Aquifer inner types declare
    // clang-format off
    struct FluidSample;
    // clang-format on

    // Aquifer inner types define
    struct FluidSample {
    public:
        // prevent constructor by default
        FluidSample& operator=(FluidSample const&);
        FluidSample(FluidSample const&);
        FluidSample();
    };

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&);
    Aquifer(Aquifer const&);
    Aquifer();

public:
    // NOLINTBEGIN
    MCAPI Aquifer(
        class ChunkPos const&           chunkPos,
        class AquiferNoises const&      aquiferNoises,
        struct OverworldNoises3d const& terrainNoises,
        class SurfaceLevelCache const&  surfaceLevelCache,
        int                             dimensionMinHeight,
        int                             levelGenHeight,
        int                             seaLevel
    );

    MCAPI void computeAt(class BlockPos const& pos);

    MCAPI float getLastBarrier() const;

    MCAPI class Block const* getLastFluidBlockType(bool canTickUpdate) const;

    MCAPI int getLastFluidLevel() const;

    MCAPI bool shouldScheduleFluidUpdate() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const& cellCenter) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<std::pair<int, int>, 13> const chunkOffset;

    // NOLINTEND
};
