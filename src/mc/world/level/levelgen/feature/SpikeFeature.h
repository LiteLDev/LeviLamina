#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // prevent constructor by default
        EndSpike& operator=(EndSpike const&) = delete;
        EndSpike(EndSpike const&)            = delete;
        EndSpike()                           = delete;

    public:
        /**
         * @symbol ??0EndSpike\@SpikeFeature\@\@QEAA\@HHHH_N\@Z
         */
        MCAPI EndSpike(int, int, int, int, bool); // NOLINT
        /**
         * @symbol ?getCenterX\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getCenterX() const; // NOLINT
        /**
         * @symbol ?getCenterZ\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getCenterZ() const; // NOLINT
        /**
         * @symbol ?getHeight\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getHeight() const; // NOLINT
        /**
         * @symbol ?getTopBoundingBox\@EndSpike\@SpikeFeature\@\@QEBA?AVAABB\@\@XZ
         */
        MCAPI class AABB getTopBoundingBox() const; // NOLINT
        /**
         * @symbol ?startsInChunk\@EndSpike\@SpikeFeature\@\@QEBA_NAEBVBlockPos\@\@\@Z
         */
        MCAPI bool startsInChunk(class BlockPos const&) const; // NOLINT
    };

public:
    // prevent constructor by default
    SpikeFeature& operator=(SpikeFeature const&) = delete;
    SpikeFeature(SpikeFeature const&)            = delete;
    SpikeFeature()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@SpikeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIKEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SpikeFeature(); // NOLINT
#endif
    /**
     * @symbol ??0SpikeFeature\@\@QEAA\@AEBVEndSpike\@0\@\@Z
     */
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const&); // NOLINT
    /**
     * @symbol ?placeManually\@SpikeFeature\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool placeManually(class BlockSource&, class BlockPos const&, class Random&, class Actor*); // NOLINT
    /**
     * @symbol ?postProcessMobsAt\@SpikeFeature\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ?setCrystalBeamTarget\@SpikeFeature\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setCrystalBeamTarget(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setCrystalInvulnerable\@SpikeFeature\@\@QEAAX_N\@Z
     */
    MCAPI void setCrystalInvulnerable(bool); // NOLINT
};
