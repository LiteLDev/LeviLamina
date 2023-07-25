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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFER_FLUIDSAMPLE
    public:
        FluidSample& operator=(FluidSample const&) = delete;
        FluidSample(FluidSample const&)            = delete;
        FluidSample()                              = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFER
public:
    Aquifer& operator=(Aquifer const&) = delete;
    Aquifer(Aquifer const&)            = delete;
    Aquifer()                          = delete;
#endif

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
    );
    /**
     * @symbol ?computeAt\@Aquifer\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void computeAt(class BlockPos const&);
    /**
     * @symbol ?getLastBarrier\@Aquifer\@\@QEBAMXZ
     */
    MCAPI float getLastBarrier() const;
    /**
     * @symbol ?getLastFluidBlockType\@Aquifer\@\@QEBAPEBVBlock\@\@_N\@Z
     */
    MCAPI class Block const* getLastFluidBlockType(bool) const;
    /**
     * @symbol ?getLastFluidLevel\@Aquifer\@\@QEBAHXZ
     */
    MCAPI int getLastFluidLevel() const;
    /**
     * @symbol ?shouldScheduleFluidUpdate\@Aquifer\@\@QEBA_NXZ
     */
    MCAPI bool shouldScheduleFluidUpdate() const;

    // private:
    /**
     * @symbol ?_computeAquifer\@Aquifer\@\@AEBA?AUFluidSample\@1\@AEBVBlockPos\@\@\@Z
     */
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const&) const;

private:
    /**
     * @symbol ?chunkOffset\@Aquifer\@\@0V?$array\@U?$pair\@HH\@std\@\@$0N\@\@std\@\@B
     */
    MCAPI static class std::array<struct std::pair<int, int>, 13> const chunkOffset;
};
