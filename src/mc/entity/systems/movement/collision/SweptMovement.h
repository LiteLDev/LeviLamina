#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SweptMovement { struct MoveResult; }
// clang-format on

namespace SweptMovement {
// NOLINTBEGIN
// symbol: ?computeMaxDepenetration@SweptMovement@@YA?AVVec3@@_NAEBV?$optional@VVec3@@@std@@@Z
MCAPI class Vec3 computeMaxDepenetration(bool, std::optional<class Vec3> const&);

// symbol:
// ?computeMoveWithDepenetration@SweptMovement@@YA?AUMoveResult@1@V?$span@$$CBVVec3@@$0?0@gsl@@AEBVAABB@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVVec3@@@Z
MCAPI struct SweptMovement::MoveResult
computeMoveWithDepenetration(gsl::span<class Vec3 const>, class AABB const&, std::vector<class AABB> const&, class Vec3 const&);

// symbol:
// ?computeYXZMoveWithDepenetration@SweptMovement@@YA?AUMoveResult@1@AEBVVec3@@AEBVAABB@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@0@Z
MCAPI struct SweptMovement::MoveResult
computeYXZMoveWithDepenetration(class Vec3 const&, class AABB const&, std::vector<class AABB> const&, class Vec3 const&);
// NOLINTEND

}; // namespace SweptMovement
