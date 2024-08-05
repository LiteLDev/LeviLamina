#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RoofedTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    RoofedTreeCanopy& operator=(RoofedTreeCanopy const&);
    RoofedTreeCanopy(RoofedTreeCanopy const&);
    RoofedTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RoofedTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockPos>
    _placeLeafAt(class IBlockWorldGenAPI& target, class BlockPos const& pos, gsl::not_null<class Block const*>) const;

    // NOLINTEND
};
