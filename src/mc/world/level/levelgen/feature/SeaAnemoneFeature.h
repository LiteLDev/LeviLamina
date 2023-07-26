#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaAnemoneFeature : public ::Feature {

public:
    // prevent constructor by default
    SeaAnemoneFeature& operator=(SeaAnemoneFeature const&) = delete;
    SeaAnemoneFeature(SeaAnemoneFeature const&)            = delete;
    SeaAnemoneFeature()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@SeaAnemoneFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
};
