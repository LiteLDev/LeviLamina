#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk {
public:
    // prevent constructor by default
    FancyTreeTrunk& operator=(FancyTreeTrunk const&);
    FancyTreeTrunk(FancyTreeTrunk const&);
    FancyTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FancyTreeTrunk@@UEAA@XZ
    virtual ~FancyTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@FancyTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, int treeHeight, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@FancyTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkLine@FancyTreeTrunk@@AEBAHAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1AEBUTreeParams@TreeHelper@@@Z
    MCAPI int _checkLine(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                startPos,
        class BlockPos const&                endPos,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // symbol: ?_placeLimb@FancyTreeTrunk@@AEBAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1@Z
    MCAPI void
    _placeLimb(class IBlockWorldGenAPI& target, class BlockPos const& startPos, class BlockPos const& endPos) const;

    // NOLINTEND
};
