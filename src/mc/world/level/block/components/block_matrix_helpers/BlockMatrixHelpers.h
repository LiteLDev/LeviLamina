#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockTransformationComponent.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
// clang-format on

namespace BlockMatrixHelpers {
// functions
// NOLINTBEGIN
MCAPI ::Matrix const bakeRotationMatrix(int x, int y, int z);

MCAPI ::Matrix calculateTransformMatrix(
    ::Vec3 const&                                       translation,
    ::BlockTransformationComponent::RotationType const& rotation,
    ::BlockTransformationComponent::ScaleType const&    scale
);
// NOLINTEND

} // namespace BlockMatrixHelpers
