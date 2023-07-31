#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeCanopy {

public:
    // prevent constructor by default
    CherryTreeCanopy& operator=(CherryTreeCanopy const&) = delete;
    CherryTreeCanopy(CherryTreeCanopy const&)            = delete;
    CherryTreeCanopy()                                   = delete;

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
     * ?placeCanopy\@CherryTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_placeLayerOfLeaves\@CherryTreeCanopy\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HAEBVBlock\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void
    _placeLayerOfLeaves(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, class Block const&, int, struct TreeHelper::TreeParams const&)
        const;
    /**
     * @symbol
     * ?_placeLayerOfLeavesWithHangingLeavesBelow\@CherryTreeCanopy\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HAEBVBlock\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void
    _placeLayerOfLeavesWithHangingLeavesBelow(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, class Block const&, int, struct TreeHelper::TreeParams const&)
        const;
    // NOLINTEND
};
