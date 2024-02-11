#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SimpleTreeTrunk {
public:
    // prevent constructor by default
    SimpleTreeTrunk& operator=(SimpleTreeTrunk const&);
    SimpleTreeTrunk(SimpleTreeTrunk const&);
    SimpleTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimpleTreeTrunk@@UEAA@XZ
    virtual ~SimpleTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@SimpleTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@SimpleTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND
};
