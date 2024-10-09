#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class AcaciaTreeCanopy : public ::ITreeCanopy {
public:
    // prevent constructor by default
    AcaciaTreeCanopy& operator=(AcaciaTreeCanopy const&);
    AcaciaTreeCanopy(AcaciaTreeCanopy const&);
    AcaciaTreeCanopy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcaciaTreeCanopy() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&, struct TreeHelper::TreeParams const& treeParams, std::vector<class BlockPos> const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _placeLeaf(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        gsl::not_null<class Block const*>    leavesBlock,
        struct TreeHelper::TreeParams const& treeParams
    ) const;

    // NOLINTEND
};
