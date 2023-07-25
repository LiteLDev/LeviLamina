#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IcePatchFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEPATCHFEATURE
public:
    IcePatchFeature& operator=(IcePatchFeature const&) = delete;
    IcePatchFeature(IcePatchFeature const&)            = delete;
    IcePatchFeature()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@IcePatchFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0IcePatchFeature\@\@QEAA\@H\@Z
     */
    MCAPI IcePatchFeature(int);
};
