#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MegaPineTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    MegaPineTreeCanopy& operator=(MegaPineTreeCanopy const&);
    MegaPineTreeCanopy(MegaPineTreeCanopy const&);
    MegaPineTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MegaPineTreeCanopy@@UEAA@XZ
    virtual ~MegaPineTreeCanopy() = default;

    // vIndex: 1, symbol:
    // ?placeCanopy@MegaPineTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
