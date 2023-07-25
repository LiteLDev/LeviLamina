#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeagrassFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAGRASSFEATURE
public:
    SeagrassFeature& operator=(SeagrassFeature const&) = delete;
    SeagrassFeature(SeagrassFeature const&)            = delete;
    SeagrassFeature()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@SeagrassFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol ?_isNotIce\@SeagrassFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isNotIce(class BlockSource&, class BlockPos const&) const;

private:
};
