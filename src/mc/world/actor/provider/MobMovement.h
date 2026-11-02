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
MCNAPI float getAirSpeed(::EntityContext const& provider);

MCNAPI ::Vec3 const& getLocalMoveVelocity(::EntityContext const& provider);

MCNAPI float getMobRotation(::EntityContext const& provider);

MCNAPI float getMovementSpeed(::EntityContext const& provider);

MCNAPI void initializeMob(::EntityContext& provider);

MCNAPI void resetLocalMoveVelocity(::EntityContext& provider);

MCNAPI void setAirSpeed(::EntityContext& provider, float flySpeed);

MCNAPI void setLocalMoveVelocity(::EntityContext& provider, ::Vec3 const& localMoveVelocity);

MCAPI void setLocalMoveVelocity(
    ::EntityContext&       provider,
    ::std::optional<float> x,
    ::std::optional<float> y,
    ::std::optional<float> z
);

MCNAPI void setMobRotation(::EntityContext& provider, float rotation);

MCNAPI void setMovementSpeed(::EntityContext& provider, float speed);
// NOLINTEND

} // namespace MobMovement
