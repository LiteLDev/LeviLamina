#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class AABB;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

namespace MoveTowardsClosestSpaceSystem {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::TickingSystemWithInfo, 2> createSystems(bool isClientSide);

MCNAPI void moveTowardsClosestSpace(
    ::AABB const&                                      aabb,
    ::std::vector<::AABB> const&                       oneWayPhysicsBlocks,
    ::IConstBlockSource const&                         region,
    ::optional_ref<::GetCollisionShapeInterface const> collisionShape,
    ::Vec3&                                            posDelta
);
// NOLINTEND

} // namespace MoveTowardsClosestSpaceSystem
