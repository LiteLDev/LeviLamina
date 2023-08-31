#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeTrunk {

public:
    // prevent constructor by default
    CherryTreeTrunk& operator=(CherryTreeTrunk const&) = delete;
    CherryTreeTrunk(CherryTreeTrunk const&)            = delete;
    CherryTreeTrunk()                                  = delete;

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
     * ?placeTrunk\@CherryTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int32_t, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;
    /**
     * @vftbl 2
     * @symbol ?getTreeHeight\@CherryTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int32_t getTreeHeight(class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_generateBranch\@CherryTreeTrunk\@\@AEBA?AVBlockPos\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEAVRandom\@\@HV2\@AEBUTreeParams\@TreeHelper\@\@3H_N\@Z
     */
    MCAPI class BlockPos _generateBranch(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class Random&,
        int32_t,
        class BlockPos,
        struct TreeHelper::TreeParams const&,
        class BlockPos,
        int32_t,
        bool
    ) const;
    // NOLINTEND
};
