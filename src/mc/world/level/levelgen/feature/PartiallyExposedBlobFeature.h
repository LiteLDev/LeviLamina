#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PartiallyExposedBlobFeature {

public:
    // prevent constructor by default
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&) = delete;
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&)            = delete;
    PartiallyExposedBlobFeature()                                              = delete;

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
     * ?place\@PartiallyExposedBlobFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?isWaterOrAir\@PartiallyExposedBlobFeature\@\@CA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const&, class BlockPos const&);
    // NOLINTEND
};
