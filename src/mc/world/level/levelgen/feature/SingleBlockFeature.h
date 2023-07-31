#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SingleBlockFeature {

public:
    // prevent constructor by default
    SingleBlockFeature& operator=(SingleBlockFeature const&) = delete;
    SingleBlockFeature(SingleBlockFeature const&)            = delete;
    SingleBlockFeature()                                     = delete;

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
     * ?place\@SingleBlockFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_mayAttach\@SingleBlockFeature\@\@AEBAPEBVBlock\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const* _mayAttach(class IBlockWorldGenAPI&, class BlockPos const&) const;
    // NOLINTEND
};
