#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SimpleTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    SimpleTreeCanopy& operator=(SimpleTreeCanopy const&);
    SimpleTreeCanopy(SimpleTreeCanopy const&);
    SimpleTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeCanopy(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        std::vector<class BlockPos> const&   attachmentPositions
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::optional<class BlockPos> placeCanopy$(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        std::vector<class BlockPos> const&   attachmentPositions
    ) const;

    // NOLINTEND
};
