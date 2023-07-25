#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SpringFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRINGFEATURE
public:
    SpringFeature& operator=(SpringFeature const&) = delete;
    SpringFeature(SpringFeature const&)            = delete;
    SpringFeature()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@SpringFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0SpringFeature\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI SpringFeature(class Block const&);

    // private:
    /**
     * @symbol ?isValidSpringBorderBlock\@SpringFeature\@\@AEBA_NAEBVBlockLegacy\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool isValidSpringBorderBlock(class BlockLegacy const&, class BlockSource&) const;

private:
};
