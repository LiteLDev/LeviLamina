#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class ClayFeature : public ::Feature {

public:
    // prevent constructor by default
    ClayFeature& operator=(ClayFeature const&) = delete;
    ClayFeature(ClayFeature const&)            = delete;
    ClayFeature()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@ClayFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0ClayFeature\@\@QEAA\@H\@Z
     */
    MCAPI ClayFeature(int); // NOLINT
};
