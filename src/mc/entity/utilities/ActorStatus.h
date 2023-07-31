#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorStatus {
// NOLINTBEGIN
/**
 * @symbol ?canDash\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
 */
MCAPI bool canDash(class ActorStatusProvider const&);
/**
 * @symbol ?hasDashCooldown\@ActorStatus\@\@YA_NAEBVActorStatusProvider\@\@\@Z
 */
MCAPI bool hasDashCooldown(class ActorStatusProvider const&);
/**
 * @symbol ?setCanDash\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
 */
MCAPI void setCanDash(bool, class ActorStatusProvider&);
/**
 * @symbol ?setHasDashCooldown\@ActorStatus\@\@YAX_NAEAVActorStatusProvider\@\@\@Z
 */
MCAPI void setHasDashCooldown(bool, class ActorStatusProvider&);
// NOLINTEND

}; // namespace ActorStatus
