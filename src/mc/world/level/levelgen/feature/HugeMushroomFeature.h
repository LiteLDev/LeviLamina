#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeMushroomFeature : public ::Feature {

public:
    // prevent constructor by default
    HugeMushroomFeature& operator=(HugeMushroomFeature const&) = delete;
    HugeMushroomFeature(HugeMushroomFeature const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@HugeMushroomFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUGEMUSHROOMFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HugeMushroomFeature(); // NOLINT
#endif
    /**
     * @symbol ??0HugeMushroomFeature\@\@QEAA\@XZ
     */
    MCAPI HugeMushroomFeature(); // NOLINT
    /**
     * @symbol ??0HugeMushroomFeature\@\@QEAA\@H\@Z
     */
    MCAPI HugeMushroomFeature(int); // NOLINT
    /**
     * @symbol ?placeFixed\@HugeMushroomFeature\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI bool placeFixed(class BlockSource&, class BlockPos const&, int, int) const; // NOLINT

    // private:
    /**
     * @symbol ?_canSurvive\@HugeMushroomFeature\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canSurvive(class Block const&) const; // NOLINT

private:
};
