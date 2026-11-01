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
MCNAPI ::EntityAttack::TargetedActorRangeValidation evaluateTargetedActorRange(
    ::EntityAttack::TargetedActorPolicy const& policy,
    ::Vec3 const&                              authoritativeCameraPosition,
    ::AABB const&                              authoritativeTargetBounds,
    float                                      serverDistanceTolerance
);

MCNAPI ::EntityAttack::ValidationSettings const& getValidationSettings(::ILevel const& level);
// NOLINTEND

} // namespace EntityAttack
