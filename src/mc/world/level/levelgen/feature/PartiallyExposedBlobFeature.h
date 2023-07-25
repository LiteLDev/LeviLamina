#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PartiallyExposedBlobFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTIALLYEXPOSEDBLOBFEATURE
public:
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&) = delete;
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&)            = delete;
    PartiallyExposedBlobFeature()                                              = delete;
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
     * ?place\@PartiallyExposedBlobFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // private:
    /**
     * @symbol ?isWaterOrAir\@PartiallyExposedBlobFeature\@\@CA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const&, class BlockPos const&);

private:
};
