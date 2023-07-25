#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SpruceTreeCanopy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRUCETREECANOPY
public:
    SpruceTreeCanopy& operator=(SpruceTreeCanopy const&) = delete;
    SpruceTreeCanopy(SpruceTreeCanopy const&)            = delete;
    SpruceTreeCanopy()                                   = delete;
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
     * ?placeCanopy\@SpruceTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;
};
