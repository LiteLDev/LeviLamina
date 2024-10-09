#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RandomSpreadTreeCanopy : public ::ITreeCanopy {
public:
    // RandomSpreadTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // RandomSpreadTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // NOLINTBEGIN
        MCAPI ~WeightedBlockReference();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RandomSpreadTreeCanopy& operator=(RandomSpreadTreeCanopy const&);
    RandomSpreadTreeCanopy(RandomSpreadTreeCanopy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomSpreadTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeCanopy(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        std::vector<class BlockPos> const&   attachmentPositions
    ) const;

    MCAPI RandomSpreadTreeCanopy();

    // NOLINTEND
};
