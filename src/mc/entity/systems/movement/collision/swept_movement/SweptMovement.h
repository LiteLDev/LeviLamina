#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SweptMovement { struct MoveResult; }
// clang-format on

namespace SweptMovement {
// NOLINTBEGIN
MCAPI class Vec3
computeMaxDepenetration(bool usesOneWayCollision, std::optional<class Vec3> const& optionalAdditiveOverride);

MCAPI struct SweptMovement::MoveResult computeMoveWithDepenetration(
    gsl::span<class Vec3 const>    steps,
    class AABB const&              mover,
    std::vector<class AABB> const& collisionShapes,
    class Vec3 const&              maxDepenetration
);

MCAPI struct SweptMovement::MoveResult computeYXZMoveWithDepenetration(
    class Vec3 const&              displacement,
    class AABB const&              mover,
    std::vector<class AABB> const& collisionShapes,
    class Vec3 const&              maxDepenetration
);
// NOLINTEND

}; // namespace SweptMovement
