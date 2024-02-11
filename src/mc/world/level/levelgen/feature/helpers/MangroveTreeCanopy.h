#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeCanopy : public ::ITreeCanopy {
public:
    // MangroveTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // MangroveTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // NOLINTBEGIN
        // symbol: ??1WeightedBlockReference@MangroveTreeCanopy@@QEAA@XZ
        MCAPI ~WeightedBlockReference();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MangroveTreeCanopy& operator=(MangroveTreeCanopy const&);
    MangroveTreeCanopy(MangroveTreeCanopy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MangroveTreeCanopy@@UEAA@XZ
    virtual ~MangroveTreeCanopy() = default;

    // vIndex: 1, symbol:
    // ?placeCanopy@MangroveTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // symbol: ??0MangroveTreeCanopy@@QEAA@XZ
    MCAPI MangroveTreeCanopy();

    // NOLINTEND
};
