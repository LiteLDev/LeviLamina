#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FreezingSystemInternal {
/**
 * @symbol ?processFreezeEffect\@FreezingSystemInternal\@\@YAXAEAVActor\@\@AEBVFreezingComponent\@\@\@Z
 */
MCAPI void processFreezeEffect(class Actor&, class FreezingComponent const&);
/**
 * @symbol
 * ?tickFreezeComponent\@FreezingSystemInternal\@\@YAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVFreezingComponent\@\@\@Z
 */
MCAPI void tickFreezeComponent(class EntityContext&, class ActorOwnerComponent&, class FreezingComponent&);

}; // namespace FreezingSystemInternal
