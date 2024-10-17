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
        MCAPI ~WeightedBlockReference();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MangroveTreeCanopy& operator=(MangroveTreeCanopy const&);
    MangroveTreeCanopy(MangroveTreeCanopy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeCanopy(
        class IBlockWorldGenAPI& target,
        class BlockPos const&,
        class Random& random,
        class RenderParams&,
        struct TreeHelper::TreeParams const& treeParams,
        std::vector<class BlockPos> const&   attachmentPositions
    ) const;

    MCAPI MangroveTreeCanopy();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI std::optional<class BlockPos> placeCanopy$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&,
        class Random& random,
        class RenderParams&,
        struct TreeHelper::TreeParams const& treeParams,
        std::vector<class BlockPos> const&   attachmentPositions
    ) const;

    // NOLINTEND
};
