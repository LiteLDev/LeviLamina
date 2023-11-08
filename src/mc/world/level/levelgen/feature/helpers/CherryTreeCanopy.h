#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class CherryTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    CherryTreeCanopy& operator=(CherryTreeCanopy const&);
    CherryTreeCanopy(CherryTreeCanopy const&);
    CherryTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CherryTreeCanopy@@UEAA@XZ
    virtual ~CherryTreeCanopy() = default;

    // vIndex: 1, symbol:
    // ?placeCanopy@CherryTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_placeLayerOfLeaves@CherryTreeCanopy@@AEBAXAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HAEBVBlock@@HAEBUTreeParams@TreeHelper@@@Z
    MCAPI void
    _placeLayerOfLeaves(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, class Block const&, int, struct TreeHelper::TreeParams const&)
        const;

    // symbol:
    // ?_placeLayerOfLeavesWithHangingLeavesBelow@CherryTreeCanopy@@AEBAXAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HAEBVBlock@@HAEBUTreeParams@TreeHelper@@@Z
    MCAPI void
    _placeLayerOfLeavesWithHangingLeavesBelow(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, class Block const&, int, struct TreeHelper::TreeParams const&)
        const;

    // symbol:
    // ?_tryPlaceBlock@CherryTreeCanopy@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@AEBUTreeParams@TreeHelper@@@Z
    MCAPI bool
    _tryPlaceBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, struct TreeHelper::TreeParams const&)
        const;

    // NOLINTEND
};
