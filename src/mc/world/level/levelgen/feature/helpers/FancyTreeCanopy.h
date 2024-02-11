#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    FancyTreeCanopy& operator=(FancyTreeCanopy const&);
    FancyTreeCanopy(FancyTreeCanopy const&);
    FancyTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FancyTreeCanopy@@UEAA@XZ
    virtual ~FancyTreeCanopy() = default;

    // vIndex: 1, symbol:
    // ?placeCanopy@FancyTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
