#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockTransformationComponent.h"

namespace BlockMatrixHelpers {
// NOLINTBEGIN
MCAPI class Matrix const bakeRotationMatrix(int x, int y, int z);

MCAPI class Matrix calculateTransformMatrix(
    class Vec3 const&                                        translation,
    struct BlockTransformationComponent::RotationType const& rotation,
    struct BlockTransformationComponent::ScaleType const&    scale
);
// NOLINTEND

}; // namespace BlockMatrixHelpers
