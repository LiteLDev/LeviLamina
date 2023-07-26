#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Exclude;
template<typename... T0> struct Include;
// clang-format on

namespace ActorPlayMovementSoundSystemImpl {
/**
 * @symbol ?doPlayMovementSound\@ActorPlayMovementSoundSystemImpl\@\@YAXAEAVActorOwnerComponent\@\@\@Z
 */
MCAPI void doPlayMovementSound(class ActorOwnerComponent&); // NOLINT
/**
 * @symbol
 * ?tick\@ActorPlayMovementSoundSystemImpl\@\@YAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@UPassengerComponent\@\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
 */
MCAPI void tick(class ViewT<
                class StrictEntityContext,
                class EntityRegistryBase,
                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                struct Exclude<struct PassengerComponent, class FlagComponent<struct ActorRemovedFlag>>,
                class ActorOwnerComponent>); // NOLINT

}; // namespace ActorPlayMovementSoundSystemImpl
