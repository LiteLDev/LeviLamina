#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaTreeTrunk {

public:
    // prevent constructor by default
    MegaTreeTrunk& operator=(MegaTreeTrunk const&) = delete;
    MegaTreeTrunk(MegaTreeTrunk const&)            = delete;
    MegaTreeTrunk()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?placeTrunk\@MegaTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getTreeHeight\@MegaTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_prepareSpawn\@MegaTreeTrunk\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI bool _prepareSpawn(class IBlockWorldGenAPI&, class BlockPos const&, int, struct TreeHelper::TreeParams const&)
        const; // NOLINT

private:
};
