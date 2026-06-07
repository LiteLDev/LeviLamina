#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class HitResult;
class Vec3;
// clang-format on

namespace HitDetection::ActorPicking {
// functions
// NOLINTBEGIN
MCNAPI ::HitResult
getClosestHitResult(::BlockSource& region, ::Actor& camera, ::Actor& player, ::Vec3 const& from, ::Vec3 const& to);
// NOLINTEND

} // namespace HitDetection::ActorPicking
