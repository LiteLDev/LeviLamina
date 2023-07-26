#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorStatus {
/**
 * @symbol ?canDash\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
 */
MCAPI bool canDash(class ActorStatusProvider const&); // NOLINT
/**
 * @symbol ?hasDashCooldown\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
 */
MCAPI bool hasDashCooldown(class ActorStatusProvider const&); // NOLINT
/**
 * @symbol ?setCanDash\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
 */
MCAPI void setCanDash(bool, class ActorStatusProvider&); // NOLINT
/**
 * @symbol ?setHasDashCooldown\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
 */
MCAPI void setHasDashCooldown(bool, class ActorStatusProvider&); // NOLINT

}; // namespace ActorStatus
