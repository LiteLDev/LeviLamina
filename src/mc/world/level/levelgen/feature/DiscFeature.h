#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DiscFeature : public ::Feature {

public:
    // prevent constructor by default
    DiscFeature& operator=(DiscFeature const&) = delete;
    DiscFeature(DiscFeature const&)            = delete;
    DiscFeature()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@DiscFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0DiscFeature\@\@QEAA\@AEBVBlock\@\@H\@Z
     */
    MCAPI DiscFeature(class Block const&, int);
    // NOLINTEND
};
