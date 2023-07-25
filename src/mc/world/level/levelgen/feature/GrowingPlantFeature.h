#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GrowingPlantFeature {
public:
    // GrowingPlantFeature inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // GrowingPlantFeature inner types define
    struct WeightedBlockReference {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWINGPLANTFEATURE_WEIGHTEDBLOCKREFERENCE
    public:
        WeightedBlockReference& operator=(WeightedBlockReference const&) = delete;
        WeightedBlockReference(WeightedBlockReference const&)            = delete;
        WeightedBlockReference()                                         = delete;
#endif

    public:
        /**
         * @symbol ??1WeightedBlockReference\@GrowingPlantFeature\@\@QEAA\@XZ
         */
        MCAPI ~WeightedBlockReference();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWINGPLANTFEATURE
public:
    GrowingPlantFeature& operator=(GrowingPlantFeature const&) = delete;
    GrowingPlantFeature(GrowingPlantFeature const&)            = delete;
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
     * ?place\@GrowingPlantFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0GrowingPlantFeature\@\@QEAA\@XZ
     */
    MCAPI GrowingPlantFeature();
};
