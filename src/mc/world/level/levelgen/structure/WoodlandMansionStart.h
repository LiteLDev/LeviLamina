#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WoodlandMansionStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODLANDMANSIONSTART
public:
    WoodlandMansionStart& operator=(WoodlandMansionStart const&) = delete;
    WoodlandMansionStart(WoodlandMansionStart const&)            = delete;
    WoodlandMansionStart()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@WoodlandMansionStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // private:
    /**
     * @symbol ?_create\@WoodlandMansionStart\@\@AEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void _create(class Dimension&, class Random&, int, int);
    /**
     * @symbol
     * ?_makeStairs\@WoodlandMansionStart\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@EEAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void
    _makeStairs(class BlockPos const&, class Block const&, unsigned char, unsigned char, class BlockSource&, class BoundingBox const&);
    /**
     * @symbol ?_fillCobblestone\@WoodlandMansionStart\@\@CAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI static void _fillCobblestone(class BlockPos const&, class BlockSource&);

private:
};
