#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJump {
/**
 * @symbol ?getJumpStartPosition\@MobJump\@\@YA?AVVec3\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec3 getJumpStartPosition(class EntityContext const&); // NOLINT
/**
 * @symbol ?getNoJumpDelay\@MobJump\@\@YAHAEBVEntityContext\@\@\@Z
 */
MCAPI int getNoJumpDelay(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeMob\@MobJump\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeMob(class EntityContext&); // NOLINT
/**
 * @symbol ?isAutoJumping\@MobJump\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isAutoJumping(class EntityContext const&); // NOLINT
/**
 * @symbol ?setIsAutoJumping\@MobJump\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsAutoJumping(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setJumpPendingScale\@MobJump\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setJumpPendingScale(class EntityContext&, float); // NOLINT
/**
 * @symbol ?setJumpStartPosition\@MobJump\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
 */
MCAPI void setJumpStartPosition(class EntityContext&, class Vec3 const&); // NOLINT
/**
 * @symbol ?setJumpVelRedux\@MobJump\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setJumpVelRedux(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setNoJumpDelay\@MobJump\@\@YAXAEAVEntityContext\@\@H\@Z
 */
MCAPI void setNoJumpDelay(class EntityContext&, int); // NOLINT

}; // namespace MobJump
