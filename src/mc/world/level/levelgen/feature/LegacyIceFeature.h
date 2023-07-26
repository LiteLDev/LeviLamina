#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyIceFeature : public ::Feature {

public:
    // prevent constructor by default
    LegacyIceFeature& operator=(LegacyIceFeature const&) = delete;
    LegacyIceFeature(LegacyIceFeature const&)            = delete;
    LegacyIceFeature()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyIceFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0LegacyIceFeature\@\@QEAA\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyIceFeature(class FeatureRegistry const&); // NOLINT
};
