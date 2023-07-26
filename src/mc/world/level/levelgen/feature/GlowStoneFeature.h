#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class GlowStoneFeature : public ::Feature {

public:
    // prevent constructor by default
    GlowStoneFeature& operator=(GlowStoneFeature const&) = delete;
    GlowStoneFeature(GlowStoneFeature const&)            = delete;
    GlowStoneFeature()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@GlowStoneFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLOWSTONEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GlowStoneFeature(); // NOLINT
#endif
};
