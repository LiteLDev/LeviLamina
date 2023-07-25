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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE_ENDSPIKE
    public:
        EndSpike& operator=(EndSpike const&) = delete;
        EndSpike(EndSpike const&)            = delete;
        EndSpike()                           = delete;
#endif

    public:
        /**
         * @symbol ??0EndSpike\@SpikeFeature\@\@QEAA\@HHHH_N\@Z
         */
        MCAPI EndSpike(int, int, int, int, bool);
        /**
         * @symbol ?getCenterX\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getCenterX() const;
        /**
         * @symbol ?getCenterZ\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getCenterZ() const;
        /**
         * @symbol ?getHeight\@EndSpike\@SpikeFeature\@\@QEBAHXZ
         */
        MCAPI int getHeight() const;
        /**
         * @symbol ?getTopBoundingBox\@EndSpike\@SpikeFeature\@\@QEBA?AVAABB\@\@XZ
         */
        MCAPI class AABB getTopBoundingBox() const;
        /**
         * @symbol ?startsInChunk\@EndSpike\@SpikeFeature\@\@QEBA_NAEBVBlockPos\@\@\@Z
         */
        MCAPI bool startsInChunk(class BlockPos const&) const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    SpikeFeature& operator=(SpikeFeature const&) = delete;
    SpikeFeature(SpikeFeature const&)            = delete;
    SpikeFeature()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@SpikeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIKEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SpikeFeature();
#endif
    /**
     * @symbol ??0SpikeFeature\@\@QEAA\@AEBVEndSpike\@0\@\@Z
     */
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const&);
    /**
     * @symbol ?placeManually\@SpikeFeature\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool placeManually(class BlockSource&, class BlockPos const&, class Random&, class Actor*);
    /**
     * @symbol ?postProcessMobsAt\@SpikeFeature\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ?setCrystalBeamTarget\@SpikeFeature\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setCrystalBeamTarget(class BlockPos const&);
    /**
     * @symbol ?setCrystalInvulnerable\@SpikeFeature\@\@QEAAX_N\@Z
     */
    MCAPI void setCrystalInvulnerable(bool);
};
