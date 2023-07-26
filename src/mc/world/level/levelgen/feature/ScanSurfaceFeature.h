#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScanSurfaceFeature {

public:
    // prevent constructor by default
    ScanSurfaceFeature& operator=(ScanSurfaceFeature const&) = delete;
    ScanSurfaceFeature(ScanSurfaceFeature const&)            = delete;
    ScanSurfaceFeature()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@ScanSurfaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT
};
