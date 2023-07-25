#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PillagerOutpostStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTSTART
public:
    PillagerOutpostStart& operator=(PillagerOutpostStart const&) = delete;
    PillagerOutpostStart(PillagerOutpostStart const&)            = delete;
    PillagerOutpostStart()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@PillagerOutpostStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
