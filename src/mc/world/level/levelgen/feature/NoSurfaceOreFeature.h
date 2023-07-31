#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoSurfaceOreFeature {

public:
    // prevent constructor by default
    NoSurfaceOreFeature& operator=(NoSurfaceOreFeature const&) = delete;
    NoSurfaceOreFeature(NoSurfaceOreFeature const&)            = delete;
    NoSurfaceOreFeature()                                      = delete;

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
     * ?place\@NoSurfaceOreFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0NoSurfaceOreFeature\@\@QEAA\@UIntRange\@\@AEBVBlockDescriptor\@\@11\@Z
     */
    MCAPI
    NoSurfaceOreFeature(struct IntRange, class BlockDescriptor const&, class BlockDescriptor const&, class BlockDescriptor const&);
    // NOLINTEND
};
