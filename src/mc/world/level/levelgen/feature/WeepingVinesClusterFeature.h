#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WeepingVinesClusterFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEEPINGVINESCLUSTERFEATURE
public:
    WeepingVinesClusterFeature& operator=(WeepingVinesClusterFeature const&) = delete;
    WeepingVinesClusterFeature(WeepingVinesClusterFeature const&)            = delete;
    WeepingVinesClusterFeature()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@WeepingVinesClusterFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol ?_isInvalidPlacementLocation\@WeepingVinesClusterFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isInvalidPlacementLocation(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol
     * ?_placeRoofNetherWart\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofNetherWart(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol
     * ?_placeRoofWeepingVines\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofWeepingVines(class BlockSource&, class BlockPos const&, class Random&) const;

private:
};
