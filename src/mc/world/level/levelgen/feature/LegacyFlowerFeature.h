#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyFlowerFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFLOWERFEATURE
public:
    LegacyFlowerFeature& operator=(LegacyFlowerFeature const&) = delete;
    LegacyFlowerFeature(LegacyFlowerFeature const&)            = delete;
    LegacyFlowerFeature()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyFlowerFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0LegacyFlowerFeature\@\@QEAA\@W4FlowerPlacementType\@\@\@Z
     */
    MCAPI LegacyFlowerFeature(enum class FlowerPlacementType);
};
