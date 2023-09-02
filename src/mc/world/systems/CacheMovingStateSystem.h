#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace CacheMovingStateSystem {
// NOLINTBEGIN
// symbol:
// ?tickEntity@CacheMovingStateSystem@@YAXAEAVStrictEntityContext@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@@Z
MCAPI void
tickEntity(class StrictEntityContext&, struct SynchedActorDataComponent&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct MovingFlag>>);

// symbol:
// ?tickPassengerEntity@CacheMovingStateSystem@@YAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
MCAPI void
tickPassengerEntity(class StrictEntityContext&, struct PassengerComponent const&, struct SynchedActorDataComponent&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct MovingFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>> const&);
// NOLINTEND

}; // namespace CacheMovingStateSystem
