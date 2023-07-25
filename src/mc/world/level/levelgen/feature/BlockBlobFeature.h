#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockBlobFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBLOBFEATURE
public:
    BlockBlobFeature& operator=(BlockBlobFeature const&) = delete;
    BlockBlobFeature(BlockBlobFeature const&)            = delete;
    BlockBlobFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BlockBlobFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0BlockBlobFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI BlockBlobFeature(class Block const&, int);
};
