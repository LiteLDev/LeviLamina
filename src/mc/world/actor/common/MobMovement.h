#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovement {
/**
 * @symbol ?getFlySpeed\@MobMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getFlySpeed(class EntityContext const&); // NOLINT
/**
 * @symbol ?getFrictionModifier\@MobMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getFrictionModifier(class EntityContext const&); // NOLINT
/**
 * @symbol ?getLocalMoveVelocity\@MobMovement\@\@YAAEBVVec3\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec3 const& getLocalMoveVelocity(class EntityContext const&); // NOLINT
/**
 * @symbol ?getMobRotation\@MobMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getMobRotation(class EntityContext const&); // NOLINT
/**
 * @symbol ?getMovementSpeed\@MobMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getMovementSpeed(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeMob\@MobMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeMob(class EntityContext&); // NOLINT
/**
 * @symbol ?isFrictionDiscarded\@MobMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isFrictionDiscarded(class EntityContext const&); // NOLINT
/**
 * @symbol ?resetLocalMoveVelocity\@MobMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void resetLocalMoveVelocity(class EntityContext&); // NOLINT
/**
 * @symbol ?setDiscardFriction\@MobMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setDiscardFriction(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setFlySpeed\@MobMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setFlySpeed(class EntityContext&, float); // NOLINT
/**
 * @symbol ?setFrictionModifier\@MobMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setFrictionModifier(class EntityContext&, float); // NOLINT
/**
 * @symbol ?setLocalMoveVelocity\@MobMovement\@\@YAXAEAVEntityContext\@\@V?$optional\@M\@std\@\@11\@Z
 */
MCAPI void
setLocalMoveVelocity(class EntityContext&, class std::optional<float>, class std::optional<float>, class std::optional<float>); // NOLINT
/**
 * @symbol ?setLocalMoveVelocity\@MobMovement\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
 */
MCAPI void setLocalMoveVelocity(class EntityContext&, class Vec3 const&); // NOLINT
/**
 * @symbol ?setMobRotation\@MobMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setMobRotation(class EntityContext&, float); // NOLINT
/**
 * @symbol ?setMovementSpeed\@MobMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setMovementSpeed(class EntityContext&, float); // NOLINT

}; // namespace MobMovement
