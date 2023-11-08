#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaTreeTrunk {
public:
    // prevent constructor by default
    MegaTreeTrunk& operator=(MegaTreeTrunk const&);
    MegaTreeTrunk(MegaTreeTrunk const&);
    MegaTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MegaTreeTrunk@@UEAA@XZ
    virtual ~MegaTreeTrunk() = default;

    // vIndex: 1, symbol:
    // ?placeTrunk@MegaTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const;

    // vIndex: 2, symbol: ?getTreeHeight@MegaTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int getTreeHeight(class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_prepareSpawn@MegaTreeTrunk@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@HAEBUTreeParams@TreeHelper@@@Z
    MCAPI bool
    _prepareSpawn(class IBlockWorldGenAPI&, class BlockPos const&, int, struct TreeHelper::TreeParams const&) const;

    // NOLINTEND
};
