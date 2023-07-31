#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SurfaceRelativeThresholdFeature {

public:
    // prevent constructor by default
    SurfaceRelativeThresholdFeature& operator=(SurfaceRelativeThresholdFeature const&) = delete;
    SurfaceRelativeThresholdFeature(SurfaceRelativeThresholdFeature const&)            = delete;

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
     * ?place\@SurfaceRelativeThresholdFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0SurfaceRelativeThresholdFeature\@\@QEAA\@XZ
     */
    MCAPI SurfaceRelativeThresholdFeature();
    // NOLINTEND
};
