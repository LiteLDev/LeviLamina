#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class ClayFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLAYFEATURE
public:
    ClayFeature& operator=(ClayFeature const&) = delete;
    ClayFeature(ClayFeature const&)            = delete;
    ClayFeature()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@ClayFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0ClayFeature\@\@QEAA\@H\@Z
     */
    MCAPI ClayFeature(int);
};
