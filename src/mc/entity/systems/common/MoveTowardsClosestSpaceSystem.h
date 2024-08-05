#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"

namespace MoveTowardsClosestSpaceSystem {
// NOLINTBEGIN
MCAPI std::array<struct TickingSystemWithInfo, 2> createSystems();

MCAPI void moveTowardsClosestSpace(
    class AABB const& aabb,
    std::vector<class AABB> const&,
    class IConstBlockSource const&                             region,
    class optional_ref<class GetCollisionShapeInterface const> context,
    class Vec3&                                                posDelta
);
// NOLINTEND

}; // namespace MoveTowardsClosestSpaceSystem
