#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class HitResult;
class Vec3;
namespace SharedTypes { struct FloatRange; }
// clang-format on

namespace HitDetection::MeleeTargeting {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::HitResult> getHitResults(
    ::BlockSource&                   region,
    ::Actor&                         source,
    ::Vec3 const&                    direction,
    ::SharedTypes::FloatRange const& distance,
    float                            collisionMargin
);
// NOLINTEND

} // namespace HitDetection::MeleeTargeting
