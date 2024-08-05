#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SweptMovement { struct MoveResult; }
// clang-format on

namespace SweptMovement {
// NOLINTBEGIN
MCAPI class Vec3 computeMaxDepenetration(bool, std::optional<class Vec3> const&);

MCAPI struct SweptMovement::MoveResult
computeMoveWithDepenetration(gsl::span<class Vec3 const>, class AABB const&, std::vector<class AABB> const&, class Vec3 const&);

MCAPI struct SweptMovement::MoveResult
computeYXZMoveWithDepenetration(class Vec3 const&, class AABB const&, std::vector<class AABB> const&, class Vec3 const&);
// NOLINTEND

}; // namespace SweptMovement
