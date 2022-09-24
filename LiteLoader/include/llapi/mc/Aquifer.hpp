/**
 * @file  Aquifer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Aquifer.
 *
 */
class Aquifer {

#define AFTER_EXTRA
// Add Member There
public:
struct FluidSample {
    FluidSample() = delete;
    FluidSample(FluidSample const&) = delete;
    FluidSample(FluidSample const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFER
public:
    class Aquifer& operator=(class Aquifer const &) = delete;
    Aquifer(class Aquifer const &) = delete;
    Aquifer() = delete;
#endif

public:
    /**
     * @hash   -460986416
     * @symbol ??0Aquifer@@QEAA@AEBVChunkPos@@AEBVAquiferNoises@@AEBUOverworldNoises3d@@AEBVSurfaceLevelCache@@HHH@Z
     */
    MCAPI Aquifer(class ChunkPos const &, class AquiferNoises const &, struct OverworldNoises3d const &, class SurfaceLevelCache const &, int, int, int);
    /**
     * @hash   175170458
     * @symbol ?computeAt@Aquifer@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void computeAt(class BlockPos const &);
    /**
     * @hash   73746170
     * @symbol ?getLastBarrier@Aquifer@@QEBAMXZ
     */
    MCAPI float getLastBarrier() const;
    /**
     * @hash   2099759888
     * @symbol ?getLastFluidBlockType@Aquifer@@QEBAPEBVBlock@@_N@Z
     */
    MCAPI class Block const * getLastFluidBlockType(bool) const;
    /**
     * @hash   1777866564
     * @symbol ?getLastFluidLevel@Aquifer@@QEBAHXZ
     */
    MCAPI int getLastFluidLevel() const;
    /**
     * @hash   1285362944
     * @symbol ?shouldScheduleFluidUpdate@Aquifer@@QEBA_NXZ
     */
    MCAPI bool shouldScheduleFluidUpdate() const;

//private:
    /**
     * @hash   805135980
     * @symbol ?_computeAquifer@Aquifer@@AEBA?AUFluidSample@1@AEBVBlockPos@@@Z
     */
    MCAPI struct Aquifer::FluidSample _computeAquifer(class BlockPos const &) const;

private:
    /**
     * @hash   -26257973
     * @symbol ?chunkOffset@Aquifer@@0V?$array@U?$pair@HH@std@@$0N@@std@@B
     */
    MCAPI static class std::array<struct std::pair<int, int>, 13> const chunkOffset;

};