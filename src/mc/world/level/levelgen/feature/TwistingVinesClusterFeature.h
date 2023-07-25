#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class TwistingVinesClusterFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TWISTINGVINESCLUSTERFEATURE
public:
    TwistingVinesClusterFeature& operator=(TwistingVinesClusterFeature const&) = delete;
    TwistingVinesClusterFeature(TwistingVinesClusterFeature const&)            = delete;
    TwistingVinesClusterFeature()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@TwistingVinesClusterFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol
     * ?_placeVineString\@TwistingVinesClusterFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@HHH\@Z
     */
    MCAPI void _placeVineString(class BlockSource&, class Random&, class BlockPos const&, int, int, int) const;

private:
};
