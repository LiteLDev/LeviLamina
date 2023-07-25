#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockPileFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPILEFEATURE
public:
    BlockPileFeature& operator=(BlockPileFeature const&) = delete;
    BlockPileFeature(BlockPileFeature const&)            = delete;
    BlockPileFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BlockPileFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 4
     * @symbol ?getBlockToPlace\@BlockPileFeature\@\@MEBAAEBVBlock\@\@AEAVRandom\@\@\@Z
     */
    virtual class Block const& getBlockToPlace(class Random&) const;
    /**
     * @symbol ??0BlockPileFeature\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI BlockPileFeature(class Block const&);
};
