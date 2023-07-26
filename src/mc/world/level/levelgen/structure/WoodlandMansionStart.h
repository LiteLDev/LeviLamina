#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WoodlandMansionStart {

public:
    // prevent constructor by default
    WoodlandMansionStart& operator=(WoodlandMansionStart const&) = delete;
    WoodlandMansionStart(WoodlandMansionStart const&)            = delete;
    WoodlandMansionStart()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?postProcess\@WoodlandMansionStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT

    // private:
    /**
     * @symbol ?_create\@WoodlandMansionStart\@\@AEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void _create(class Dimension&, class Random&, int, int); // NOLINT
    /**
     * @symbol
     * ?_makeStairs\@WoodlandMansionStart\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@EEAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void
    _makeStairs(class BlockPos const&, class Block const&, unsigned char, unsigned char, class BlockSource&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?_fillCobblestone\@WoodlandMansionStart\@\@CAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI static void _fillCobblestone(class BlockPos const&, class BlockSource&); // NOLINT

private:
};
