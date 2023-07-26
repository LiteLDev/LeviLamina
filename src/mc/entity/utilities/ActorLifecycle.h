#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorLifecycle {
/**
 * @symbol ?clearIsFirstTick\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void clearIsFirstTick(class EntityContext&); // NOLINT
/**
 * @symbol ?initializeActor\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&); // NOLINT
/**
 * @symbol ?isFirstTick\@ActorLifecycle\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isFirstTick(class EntityContext const&); // NOLINT

}; // namespace ActorLifecycle
