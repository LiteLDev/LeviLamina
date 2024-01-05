#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FreezingSystemInternal {
// NOLINTBEGIN
// symbol: ?processFreezeEffect@FreezingSystemInternal@@YAXAEAVActor@@AEBVFreezingComponent@@@Z
MCAPI void processFreezeEffect(class Actor& actor, class FreezingComponent const&);

// symbol:
// ?tickFreezeComponent@FreezingSystemInternal@@YAXAEAVEntityContext@@AEAVActorOwnerComponent@@AEAVFreezingComponent@@@Z
MCAPI void tickFreezeComponent(class EntityContext& entity, class ActorOwnerComponent&, class FreezingComponent&);
// NOLINTEND

}; // namespace FreezingSystemInternal
