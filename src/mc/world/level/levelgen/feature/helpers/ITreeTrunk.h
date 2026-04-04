#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class ITreeTrunk {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITreeTrunk() = default;

    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const = 0;

    virtual int getTreeHeight(::Random& random) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
