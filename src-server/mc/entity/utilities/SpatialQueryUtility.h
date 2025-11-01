#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
// clang-format on

struct SpatialQueryUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool forEachBlockInAABB(
        ::IConstBlockSource const&                                      region,
        ::AABB const&                                                   aabb,
        float                                                           grow,
        ::std::function<void(::Block const&, ::BlockPos const&)> const& callback
    );
    // NOLINTEND
};
