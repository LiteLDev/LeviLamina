#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkPatchFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKPATCHFEATURE
public:
    SculkPatchFeature& operator=(SculkPatchFeature const&) = delete;
    SculkPatchFeature(SculkPatchFeature const&)            = delete;
    SculkPatchFeature()                                    = delete;
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
     * ?place\@SculkPatchFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
};
