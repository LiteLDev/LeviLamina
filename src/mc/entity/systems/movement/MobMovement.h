#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovement {
// NOLINTBEGIN
// symbol: ?getAirSpeed@MobMovement@@YAMAEBVEntityContext@@@Z
MCAPI float getAirSpeed(class EntityContext const&);

// symbol: ?getFrictionModifier@MobMovement@@YAMAEBVEntityContext@@@Z
MCAPI float getFrictionModifier(class EntityContext const& provider);

// symbol: ?getLocalMoveVelocity@MobMovement@@YAAEBVVec3@@AEBVEntityContext@@@Z
MCAPI class Vec3 const& getLocalMoveVelocity(class EntityContext const& provider);

// symbol: ?getMobRotation@MobMovement@@YAMAEBVEntityContext@@@Z
MCAPI float getMobRotation(class EntityContext const& provider);

// symbol: ?getMovementSpeed@MobMovement@@YAMAEBVEntityContext@@@Z
MCAPI float getMovementSpeed(class EntityContext const& provider);

// symbol: ?initializeMob@MobMovement@@YAXAEAVEntityContext@@@Z
MCAPI void initializeMob(class EntityContext& provider);

// symbol: ?isFrictionDiscarded@MobMovement@@YA_NAEBVEntityContext@@@Z
MCAPI bool isFrictionDiscarded(class EntityContext const& provider);

// symbol: ?resetLocalMoveVelocity@MobMovement@@YAXAEAVEntityContext@@@Z
MCAPI void resetLocalMoveVelocity(class EntityContext& provider);

// symbol: ?setAirSpeed@MobMovement@@YAXAEAVEntityContext@@M@Z
MCAPI void setAirSpeed(class EntityContext&, float);

// symbol: ?setDiscardFriction@MobMovement@@YAXAEAVEntityContext@@_N@Z
MCAPI void setDiscardFriction(class EntityContext& provider, bool);

// symbol: ?setFrictionModifier@MobMovement@@YAXAEAVEntityContext@@M@Z
MCAPI void setFrictionModifier(class EntityContext& provider, float modifier);

// symbol: ?setLocalMoveVelocity@MobMovement@@YAXAEAVEntityContext@@AEBVVec3@@@Z
MCAPI void setLocalMoveVelocity(class EntityContext& provider, class Vec3 const&);

// symbol: ?setLocalMoveVelocity@MobMovement@@YAXAEAVEntityContext@@V?$optional@M@std@@11@Z
MCAPI void setLocalMoveVelocity(
    class EntityContext& provider,
    std::optional<float> x,
    std::optional<float> y,
    std::optional<float> z
);

// symbol: ?setMobRotation@MobMovement@@YAXAEAVEntityContext@@M@Z
MCAPI void setMobRotation(class EntityContext& provider, float rotation);

// symbol: ?setMovementSpeed@MobMovement@@YAXAEAVEntityContext@@M@Z
MCAPI void setMovementSpeed(class EntityContext& provider, float speed);
// NOLINTEND

}; // namespace MobMovement
