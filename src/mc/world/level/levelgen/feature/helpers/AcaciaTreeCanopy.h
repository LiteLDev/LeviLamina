#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeCanopy {

public:
    // prevent constructor by default
    AcaciaTreeCanopy& operator=(AcaciaTreeCanopy const&) = delete;
    AcaciaTreeCanopy(AcaciaTreeCanopy const&)            = delete;
    AcaciaTreeCanopy()                                   = delete;

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
     * ?placeCanopy\@AcaciaTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_placeLeaf\@AcaciaTreeCanopy\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void
    _placeLeaf(class IBlockWorldGenAPI&, class BlockPos const&, class gsl::not_null<class Block const*>, struct TreeHelper::TreeParams const&)
        const;
    // NOLINTEND
};
