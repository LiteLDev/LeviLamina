#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SpruceTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    SpruceTreeCanopy& operator=(SpruceTreeCanopy const&);
    SpruceTreeCanopy(SpruceTreeCanopy const&);
    SpruceTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpruceTreeCanopy@@UEAA@XZ
    virtual ~SpruceTreeCanopy() = default;

    // vIndex: 1, symbol:
    // ?placeCanopy@SpruceTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
