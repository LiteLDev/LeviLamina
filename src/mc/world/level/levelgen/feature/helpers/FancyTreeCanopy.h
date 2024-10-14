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
    // vIndex: 0
    virtual ~FancyTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::optional<class BlockPos>
    placeCanopy$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
