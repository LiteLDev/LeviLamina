#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeightedRandomFeature {

public:
    // prevent constructor by default
    WeightedRandomFeature& operator=(WeightedRandomFeature const&) = delete;
    WeightedRandomFeature(WeightedRandomFeature const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@WeightedRandomFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT
    /**
     * @symbol ??0WeightedRandomFeature\@\@QEAA\@XZ
     */
    MCAPI WeightedRandomFeature(); // NOLINT
};
