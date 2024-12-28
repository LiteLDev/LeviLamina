#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace SweptMovement { struct MoveResult; }
// clang-format on

namespace SweptMovement {
// functions
// NOLINTBEGIN
MCAPI ::Vec3 computeMaxDepenetration(
    bool                           usesOneWayCollision,
    ::std::optional<::Vec3> const& optionalAdditiveOverride,
    ::Vec3 const&                  baseDepenetration
);

MCAPI ::SweptMovement::MoveResult computeMoveWithDepenetration(
    ::gsl::span<::Vec3 const>    steps,
    ::AABB const&                mover,
    ::std::vector<::AABB> const& collisionShapes,
    ::Vec3 const&                maxDepenetration
);

MCAPI ::SweptMovement::MoveResult computeYXZMoveWithDepenetration(
    ::Vec3 const&                displacement,
    ::AABB const&                mover,
    ::std::vector<::AABB> const& collisionShapes,
    ::Vec3 const&                maxDepenetration
);
// NOLINTEND

} // namespace SweptMovement
