#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec3;
// clang-format on

namespace MobMovement {
// functions
// NOLINTBEGIN
MCAPI float getAirSpeed(::EntityContext const& provider);

MCAPI float getFrictionModifier(::EntityContext const& provider);

MCAPI ::Vec3 const& getLocalMoveVelocity(::EntityContext const& provider);

MCAPI float getMobRotation(::EntityContext const& provider);

MCAPI float getMovementSpeed(::EntityContext const& provider);

MCAPI void initializeMob(::EntityContext& provider);

MCAPI bool isFrictionDiscarded(::EntityContext const& provider);

MCAPI void resetLocalMoveVelocity(::EntityContext& provider);

MCAPI void setAirSpeed(::EntityContext& provider, float flySpeed);

MCAPI void setDiscardFriction(::EntityContext& provider, bool discardFriction);

MCAPI void setFrictionModifier(::EntityContext& provider, float modifier);

MCAPI void setLocalMoveVelocity(::EntityContext& provider, ::Vec3 const& localMoveVelocity);

MCAPI void setLocalMoveVelocity(
    ::EntityContext&       provider,
    ::std::optional<float> x,
    ::std::optional<float> y,
    ::std::optional<float> z
);

MCAPI void setMobRotation(::EntityContext& provider, float rotation);

MCAPI void setMovementSpeed(::EntityContext& provider, float speed);
// NOLINTEND

} // namespace MobMovement
