#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WeepingVinesClusterFeature : public ::Feature {

public:
    // prevent constructor by default
    WeepingVinesClusterFeature& operator=(WeepingVinesClusterFeature const&) = delete;
    WeepingVinesClusterFeature(WeepingVinesClusterFeature const&)            = delete;
    WeepingVinesClusterFeature()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@WeepingVinesClusterFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT

    // private:
    /**
     * @symbol ?_isInvalidPlacementLocation\@WeepingVinesClusterFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isInvalidPlacementLocation(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?_placeRoofNetherWart\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofNetherWart(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol
     * ?_placeRoofWeepingVines\@WeepingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoofWeepingVines(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT

private:
};
