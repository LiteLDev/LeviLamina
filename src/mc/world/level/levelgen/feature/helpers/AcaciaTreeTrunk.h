#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeTrunk {

public:
    // prevent constructor by default
    AcaciaTreeTrunk& operator=(AcaciaTreeTrunk const&) = delete;
    AcaciaTreeTrunk(AcaciaTreeTrunk const&)            = delete;
    AcaciaTreeTrunk()                                  = delete;

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
     * ?placeTrunk\@AcaciaTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;
    /**
     * @vftbl 2
     * @symbol ?getTreeHeight\@AcaciaTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_placeLeaningBranches\@AcaciaTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEAVRandom\@\@AEAVRenderParams\@\@HHHAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void
    _placeLeaningBranches(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, class Random&, class RenderParams&, int, int, int, struct TreeHelper::TreeParams const&)
        const;
    /**
     * @symbol
     * ?_placeVerticalBranches\@AcaciaTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI void
    _placeVerticalBranches(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&)
        const;
    // NOLINTEND
};
