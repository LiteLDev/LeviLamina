#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockTransformationComponent.h"

namespace BlockMatrixHelpers {
// NOLINTBEGIN
MCAPI class Matrix const bakeRotationMatrix(int, int, int);

MCAPI class Matrix
calculateTransformMatrix(class Vec3 const&, struct BlockTransformationComponent::RotationType const&, struct BlockTransformationComponent::ScaleType const&);
// NOLINTEND

}; // namespace BlockMatrixHelpers
