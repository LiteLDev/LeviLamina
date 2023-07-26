#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySwampFoliageFeature : public ::Feature {

public:
    // prevent constructor by default
    LegacySwampFoliageFeature& operator=(LegacySwampFoliageFeature const&) = delete;
    LegacySwampFoliageFeature(LegacySwampFoliageFeature const&)            = delete;
    LegacySwampFoliageFeature()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@LegacySwampFoliageFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0LegacySwampFoliageFeature\@\@QEAA\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacySwampFoliageFeature(class FeatureRegistry&); // NOLINT
};
