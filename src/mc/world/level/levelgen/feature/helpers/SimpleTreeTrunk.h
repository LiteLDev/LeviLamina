#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SimpleTreeTrunk {
public:
    // prevent constructor by default
    SimpleTreeTrunk& operator=(SimpleTreeTrunk const&);
    SimpleTreeTrunk(SimpleTreeTrunk const&);
    SimpleTreeTrunk();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleTreeTrunk() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> placeTrunk(
        class IBlockWorldGenAPI&             target,
        class BlockPos const&                pos,
        class Random&                        random,
        int                                  treeHeight,
        class RenderParams&                  renderParams,
        struct TreeHelper::TreeParams const& treeParams,
        class ITreeCanopy const*             canopy
    ) const;

    // vIndex: 2
    virtual int getTreeHeight(class Random& random) const;

    // NOLINTEND
};
