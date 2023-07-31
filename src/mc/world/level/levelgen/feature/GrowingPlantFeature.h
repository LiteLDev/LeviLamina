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

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&) = delete;
        WeightedBlockReference(WeightedBlockReference const&)            = delete;
        WeightedBlockReference()                                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1WeightedBlockReference\@GrowingPlantFeature\@\@QEAA\@XZ
         */
        MCAPI ~WeightedBlockReference();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    GrowingPlantFeature& operator=(GrowingPlantFeature const&) = delete;
    GrowingPlantFeature(GrowingPlantFeature const&)            = delete;

public:
    // NOLINTBEGIN
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
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0GrowingPlantFeature\@\@QEAA\@XZ
     */
    MCAPI GrowingPlantFeature();
    // NOLINTEND
};
