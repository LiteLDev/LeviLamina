#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeFungusFeature : public ::Feature {

public:
    // prevent constructor by default
    HugeFungusFeature& operator=(HugeFungusFeature const&) = delete;
    HugeFungusFeature(HugeFungusFeature const&)            = delete;
    HugeFungusFeature()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@HugeFungusFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUGEFUNGUSFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HugeFungusFeature(); // NOLINT
#endif
    /**
     * @symbol ??0HugeFungusFeature\@\@QEAA\@_N\@Z
     */
    MCAPI HugeFungusFeature(bool); // NOLINT
};
