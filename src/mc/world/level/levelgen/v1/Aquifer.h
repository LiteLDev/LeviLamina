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
        FluidSample& operator=(FluidSample const&) = delete;
        FluidSample(FluidSample const&)            = delete;
        FluidSample()                              = delete;
    };

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&) = delete;
    Aquifer(Aquifer const&)            = delete;
    Aquifer()                          = delete;

public:
    /**
     * @symbol
     * ??0Aquifer\@\@QEAA\@AEBVChunkPos\@\@AEBVAquiferNoises\@\@AEBUOverworldNoises3d\@\@AEBVSurfaceLevelCache\@\@HHH\@Z
     */
    MCAPI Aquifer(
        class ChunkPos const&,
        class AquiferNoises const&,
        struct OverworldNoises3d const&,
        class SurfaceLevelCache const&,
        int,
        int,
        int
    ); // NOLINT
    /**
     * @symbol ?computeAt\@Aquifer\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void computeAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getLastBarrier\@Aquifer\@\@QEBAMXZ
     */
    MCAPI float getLastBarrier() const; // NOLINT
    /**
     * @symbol ?getLastFluidBlockType\@Aquifer\@\@QEBAPEBVBlock\@\@_N\@Z
     */
    MCAPI class Block const* getLastFluidBlockType(bool) const; // NOLINT
    /**
     * @symbol ?getLastFluidLevel\@Aquifer\@\@QEBAHXZ
     */
    MCAPI int getLastFluidLevel() const; // NOLINT
    /**
     * @symbol ?shouldScheduleFluidUpdate\@Aquifer\@\@QEBA_NXZ
     */
    MCAPI bool shouldScheduleFluidUpdate() const; // NOLINT

    // private:
    /**
     * @symbol ?_computeAquifer\@Aquifer\@\@AEBA?AUFluidSample\@1\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const&) const; // NOLINT

private:
    /**
     * @symbol ?chunkOffset\@Aquifer\@\@0V?$array\@U?$pair\@HH\@std\@\@$0N\@\@std\@\@B
     */
    MCAPI static class std::array<struct std::pair<int, int>, 13> const chunkOffset; // NOLINT
};
