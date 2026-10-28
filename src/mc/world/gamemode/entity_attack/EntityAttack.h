#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ILevel;
class Vec3;
namespace EntityAttack { struct TargetedActorPolicy; }
namespace EntityAttack { struct TargetedActorRangeValidation; }
namespace EntityAttack { struct ValidationSettings; }
// clang-format on

namespace EntityAttack {
// functions
// NOLINTBEGIN
MCAPI ::EntityAttack::TargetedActorRangeValidation evaluateTargetedActorRange(
    ::EntityAttack::TargetedActorPolicy const& policy,
    ::Vec3 const&                              authoritativeCameraPosition,
    ::AABB const&                              authoritativeTargetBounds,
    float                                      serverDistanceTolerance
);

MCAPI ::EntityAttack::ValidationSettings const& getValidationSettings(::ILevel const& level);
// NOLINTEND

} // namespace EntityAttack
