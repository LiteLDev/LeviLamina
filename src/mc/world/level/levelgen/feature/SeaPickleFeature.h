#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaPickleFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAPICKLEFEATURE
public:
    SeaPickleFeature& operator=(SeaPickleFeature const&) = delete;
    SeaPickleFeature(SeaPickleFeature const&)            = delete;
    SeaPickleFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@SeaPickleFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};
