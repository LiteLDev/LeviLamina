#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeodeFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GEODEFEATURE
public:
    GeodeFeature& operator=(GeodeFeature const&) = delete;
    GeodeFeature(GeodeFeature const&)            = delete;
    GeodeFeature()                               = delete;
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
     * ?place\@GeodeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ?canSupportGeode\@GeodeFeature\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canSupportGeode(class Block const&);
};
