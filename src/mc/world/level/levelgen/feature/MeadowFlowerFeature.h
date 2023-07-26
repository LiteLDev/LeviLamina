#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MeadowFlowerFeature : public ::Feature {

public:
    // prevent constructor by default
    MeadowFlowerFeature& operator=(MeadowFlowerFeature const&) = delete;
    MeadowFlowerFeature(MeadowFlowerFeature const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@MeadowFlowerFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ??0MeadowFlowerFeature\@\@QEAA\@XZ
     */
    MCAPI MeadowFlowerFeature(); // NOLINT

    // private:
    /**
     * @symbol ?getRandomArrayIndex\@MeadowFlowerFeature\@\@AEBAHAEBVBlockPos\@\@_KM\@Z
     */
    MCAPI int getRandomArrayIndex(class BlockPos const&, unsigned __int64, float) const; // NOLINT

private:
};
