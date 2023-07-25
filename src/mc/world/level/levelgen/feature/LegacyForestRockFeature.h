#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestRockFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFORESTROCKFEATURE
public:
    LegacyForestRockFeature& operator=(LegacyForestRockFeature const&) = delete;
    LegacyForestRockFeature(LegacyForestRockFeature const&)            = delete;
    LegacyForestRockFeature()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyForestRockFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0LegacyForestRockFeature\@\@QEAA\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyForestRockFeature(class FeatureRegistry const&);
};
