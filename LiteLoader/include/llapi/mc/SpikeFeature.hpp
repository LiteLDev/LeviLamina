/**
 * @file  SpikeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpikeFeature.
 *
 */
class SpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There
public:
class EndSpike {
public:
    EndSpike() = delete;
    EndSpike(EndSpike const&) = delete;
    EndSpike(EndSpike const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    class SpikeFeature& operator=(class SpikeFeature const &) = delete;
    SpikeFeature(class SpikeFeature const &) = delete;
    SpikeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SpikeFeature();
    /**
     * @hash   -1042246598
     * @vftbl  3
     * @symbol  ?place\@SpikeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   663282377
     * @symbol  ??0SpikeFeature\@\@QEAA\@AEBVEndSpike\@0\@\@Z
     */
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const &);
    /**
     * @hash   1508114739
     * @symbol  ?placeManually\@SpikeFeature\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool placeManually(class BlockSource &, class BlockPos const &, class Random &, class Actor *);
    /**
     * @hash   -361806318
     * @symbol  ?postProcessMobsAt\@SpikeFeature\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -424570652
     * @symbol  ?setCrystalBeamTarget\@SpikeFeature\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setCrystalBeamTarget(class BlockPos const &);
    /**
     * @hash   156514188
     * @symbol  ?setCrystalInvulnerable\@SpikeFeature\@\@QEAAX_N\@Z
     */
    MCAPI void setCrystalInvulnerable(bool);

};