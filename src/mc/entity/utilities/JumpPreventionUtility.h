#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class IConstBlockSource;
struct JumpPreventionResult;
// clang-format on

namespace JumpPreventionUtility {
// functions
// NOLINTBEGIN
MCAPI ::JumpPreventionResult
getJumpPrevention(bool isOnGround, ::AABB const& aabb, ::BlockPos pos, ::IConstBlockSource const& region);
// NOLINTEND

} // namespace JumpPreventionUtility
