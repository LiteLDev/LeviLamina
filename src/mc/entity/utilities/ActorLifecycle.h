#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorLifecycle {
/**
 * @symbol ?clearIsFirstTick\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void clearIsFirstTick(class EntityContext&);
/**
 * @symbol ?initializeActor\@ActorLifecycle\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&);
/**
 * @symbol ?isFirstTick\@ActorLifecycle\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isFirstTick(class EntityContext const&);

}; // namespace ActorLifecycle
