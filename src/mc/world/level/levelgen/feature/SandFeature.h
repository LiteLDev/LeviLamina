#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SandFeature : public ::Feature {

public:
    // prevent constructor by default
    SandFeature& operator=(SandFeature const&) = delete;
    SandFeature(SandFeature const&)            = delete;
    SandFeature()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@SandFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0SandFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI SandFeature(class Block const&, int); // NOLINT
};
