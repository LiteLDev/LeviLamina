#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SurfaceRelativeThresholdFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACERELATIVETHRESHOLDFEATURE
public:
    SurfaceRelativeThresholdFeature& operator=(SurfaceRelativeThresholdFeature const&) = delete;
    SurfaceRelativeThresholdFeature(SurfaceRelativeThresholdFeature const&)            = delete;
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
     * ?place\@SurfaceRelativeThresholdFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0SurfaceRelativeThresholdFeature\@\@QEAA\@XZ
     */
    MCAPI SurfaceRelativeThresholdFeature();
};
