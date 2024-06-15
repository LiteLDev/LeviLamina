#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockTransformationComponent.h"

namespace BlockMatrixHelpers {
// NOLINTBEGIN
// symbol: ?bakeRotationMatrix@BlockMatrixHelpers@@YA?BVMatrix@@HHH@Z
MCAPI class Matrix const bakeRotationMatrix(int, int, int);

// symbol:
// ?calculateTransformMatrix@BlockMatrixHelpers@@YA?AVMatrix@@AEBVVec3@@AEBURotationType@BlockTransformationComponent@@AEBUScaleType@5@@Z
MCAPI class Matrix
calculateTransformMatrix(class Vec3 const&, struct BlockTransformationComponent::RotationType const&, struct BlockTransformationComponent::ScaleType const&);
// NOLINTEND

}; // namespace BlockMatrixHelpers
