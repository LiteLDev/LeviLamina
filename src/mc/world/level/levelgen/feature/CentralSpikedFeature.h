#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CentralSpikedFeature : public ::Feature {

public:
    // prevent constructor by default
    CentralSpikedFeature& operator=(CentralSpikedFeature const&) = delete;
    CentralSpikedFeature(CentralSpikedFeature const&)            = delete;
    CentralSpikedFeature()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@CentralSpikedFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0CentralSpikedFeature\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI CentralSpikedFeature(class Block const&);
    // NOLINTEND
};
