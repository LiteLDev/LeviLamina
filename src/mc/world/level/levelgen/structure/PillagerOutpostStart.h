#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PillagerOutpostStart {

public:
    // prevent constructor by default
    PillagerOutpostStart& operator=(PillagerOutpostStart const&) = delete;
    PillagerOutpostStart(PillagerOutpostStart const&)            = delete;
    PillagerOutpostStart()                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
