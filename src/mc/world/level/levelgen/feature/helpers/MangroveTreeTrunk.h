#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeTrunk {
public:
    // prevent constructor by default
    MangroveTreeTrunk& operator=(MangroveTreeTrunk const&);
    MangroveTreeTrunk(MangroveTreeTrunk const&);
    MangroveTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MangroveTreeTrunk@@UEAA@XZ
    virtual ~MangroveTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@MangroveTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@MangroveTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_placeBranch@MangroveTreeTrunk@@AEBAXAEAVIBlockWorldGenAPI@@PEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEAVBlockPos@@HEHHPEBVBlock@@@Z
    MCAPI void
    _placeBranch(class IBlockWorldGenAPI& target, std::vector<class BlockPos>*, class Random& random, int treeHeight, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, class BlockPos&, int, uchar, int branchPos, int, class Block const*)
        const;

    // NOLINTEND
};
