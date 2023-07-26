#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockBlobFeature : public ::Feature {

public:
    // prevent constructor by default
    BlockBlobFeature& operator=(BlockBlobFeature const&) = delete;
    BlockBlobFeature(BlockBlobFeature const&)            = delete;
    BlockBlobFeature()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@BlockBlobFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0BlockBlobFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI BlockBlobFeature(class Block const&, int); // NOLINT
};
