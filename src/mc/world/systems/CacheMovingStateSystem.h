#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace CacheMovingStateSystem {
/**
 * @symbol
 * ?tickEntity\@CacheMovingStateSystem\@\@YAXAEAVStrictEntityContext\@\@AEAUSynchedActorDataComponent\@\@AEAUActorRotationComponent\@\@V?$Optional\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
tickEntity(class StrictEntityContext&, struct SynchedActorDataComponent&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct MovingFlag>>);
/**
 * @symbol
 * ?tickPassengerEntity\@CacheMovingStateSystem\@\@YAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAUSynchedActorDataComponent\@\@AEAUActorRotationComponent\@\@V?$Optional\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
tickPassengerEntity(class StrictEntityContext&, struct PassengerComponent const&, struct SynchedActorDataComponent&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct MovingFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>> const&);

}; // namespace CacheMovingStateSystem
