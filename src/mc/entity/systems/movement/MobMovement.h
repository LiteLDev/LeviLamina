#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovement {
// NOLINTBEGIN
MCAPI float getAirSpeed(class EntityContext const&);

MCAPI float getFrictionModifier(class EntityContext const& provider);

MCAPI class Vec3 const& getLocalMoveVelocity(class EntityContext const& provider);

MCAPI float getMobRotation(class EntityContext const& provider);

MCAPI float getMovementSpeed(class EntityContext const& provider);

MCAPI void initializeMob(class EntityContext& provider);

MCAPI bool isFrictionDiscarded(class EntityContext const& provider);

MCAPI void resetLocalMoveVelocity(class EntityContext& provider);

MCAPI void setAirSpeed(class EntityContext&, float);

MCAPI void setDiscardFriction(class EntityContext& provider, bool);

MCAPI void setFrictionModifier(class EntityContext& provider, float modifier);

MCAPI void setLocalMoveVelocity(class EntityContext& provider, class Vec3 const&);

MCAPI void setLocalMoveVelocity(
    class EntityContext& provider,
    std::optional<float> x,
    std::optional<float> y,
    std::optional<float> z
);

MCAPI void setMobRotation(class EntityContext& provider, float rotation);

MCAPI void setMovementSpeed(class EntityContext& provider, float speed);
// NOLINTEND

}; // namespace MobMovement
