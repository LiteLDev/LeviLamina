#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CentralSpikedFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CENTRALSPIKEDFEATURE
public:
    CentralSpikedFeature& operator=(CentralSpikedFeature const&) = delete;
    CentralSpikedFeature(CentralSpikedFeature const&)            = delete;
    CentralSpikedFeature()                                       = delete;
#endif

public:
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
};
