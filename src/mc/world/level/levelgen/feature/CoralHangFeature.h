#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralHangFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALHANGFEATURE
public:
    CoralHangFeature& operator=(CoralHangFeature const&) = delete;
    CoralHangFeature(CoralHangFeature const&)            = delete;
    CoralHangFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@CoralHangFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};
