#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class PodzolAreaFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PODZOLAREAFEATURE
public:
    PodzolAreaFeature& operator=(PodzolAreaFeature const&) = delete;
    PodzolAreaFeature(PodzolAreaFeature const&)            = delete;
    PodzolAreaFeature()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@PodzolAreaFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};
