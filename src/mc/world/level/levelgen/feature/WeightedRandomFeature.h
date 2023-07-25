#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeightedRandomFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEIGHTEDRANDOMFEATURE
public:
    WeightedRandomFeature& operator=(WeightedRandomFeature const&) = delete;
    WeightedRandomFeature(WeightedRandomFeature const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@WeightedRandomFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0WeightedRandomFeature\@\@QEAA\@XZ
     */
    MCAPI WeightedRandomFeature();
};
