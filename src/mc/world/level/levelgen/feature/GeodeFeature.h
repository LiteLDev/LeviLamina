#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeodeFeature {

public:
    // prevent constructor by default
    GeodeFeature& operator=(GeodeFeature const&) = delete;
    GeodeFeature(GeodeFeature const&)            = delete;
    GeodeFeature()                               = delete;

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
     * ?place\@GeodeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ?canSupportGeode\@GeodeFeature\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canSupportGeode(class Block const&);
    // NOLINTEND
};
