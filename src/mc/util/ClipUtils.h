#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class HitResult;
class Vec3;
// clang-format on

namespace ClipUtils {
// functions
// NOLINTBEGIN
MCNAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb);
// NOLINTEND

} // namespace ClipUtils
