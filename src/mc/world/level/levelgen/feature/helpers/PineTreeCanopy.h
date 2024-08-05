#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class PineTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    PineTreeCanopy& operator=(PineTreeCanopy const&);
    PineTreeCanopy(PineTreeCanopy const&);
    PineTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PineTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams& renderParams, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND
};
