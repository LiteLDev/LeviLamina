#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class WoodlandMansionStart : public ::StructureStart {

public:
    // prevent constructor by default
    WoodlandMansionStart& operator=(WoodlandMansionStart const&) = delete;
    WoodlandMansionStart(WoodlandMansionStart const&)            = delete;
    WoodlandMansionStart()                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_create\@WoodlandMansionStart\@\@AEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void _create(class Dimension&, class Random&, int32_t, int32_t);
    /**
     * @symbol
     * ?_makeStairs\@WoodlandMansionStart\@\@AEAAXAEBVBlockPos\@\@AEBVBlock\@\@EEAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void
    _makeStairs(class BlockPos const&, class Block const&, uint8_t, uint8_t, class BlockSource&, class BoundingBox const&);
    /**
     * @symbol ?_fillCobblestone\@WoodlandMansionStart\@\@CAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI static void _fillCobblestone(class BlockPos const&, class BlockSource&);
    // NOLINTEND
};
