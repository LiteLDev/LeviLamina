#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeodeFeature {

public:
    // prevent constructor by default
    GeodeFeature& operator=(GeodeFeature const&) = delete;
    GeodeFeature(GeodeFeature const&)            = delete;
    GeodeFeature()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@GeodeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT
    /**
     * @symbol ?canSupportGeode\@GeodeFeature\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canSupportGeode(class Block const&); // NOLINT
};
