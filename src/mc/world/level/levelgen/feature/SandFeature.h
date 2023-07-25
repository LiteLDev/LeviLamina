#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SandFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SANDFEATURE
public:
    SandFeature& operator=(SandFeature const&) = delete;
    SandFeature(SandFeature const&)            = delete;
    SandFeature()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@SandFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0SandFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI SandFeature(class Block const&, int);
};
