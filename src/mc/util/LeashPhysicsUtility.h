#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LeashableComponent;
class Vec3;
struct LeashablePreset;
// clang-format on

namespace LeashPhysicsUtility {
// functions
// NOLINTBEGIN
MCNAPI void
applyBouncyForce(::Vec3 const& actorToLeashHolder, float distance, ::Actor& actor, ::LeashablePreset const& preset);

MCNAPI void applyDampenedForce(
    ::Actor const&           leashHolder,
    float                    distance,
    ::Actor&                 actor,
    ::LeashableComponent&    leashableComponent,
    ::LeashablePreset const& preset
);

MCNAPI void applyQuadDampenedForce(
    ::Actor const&           leashHolder,
    float                    distance,
    ::Actor&                 actor,
    ::LeashableComponent&    leashableComponent,
    ::LeashablePreset const& preset
);
// NOLINTEND

} // namespace LeashPhysicsUtility
