/**
 * @file  ActorPlayMovementSoundSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorPlayMovementSoundSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doPlayMovementSound\@ActorPlayMovementSoundSystemImpl\@\@YAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void doPlayMovementSound(class ActorOwnerComponent &);
    /**
     * @symbol ?tick\@ActorPlayMovementSoundSystemImpl\@\@YAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@UPassengerComponent\@\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<struct PassengerComponent, class FlagComponent<struct ActorRemovedFlag>>, class ActorOwnerComponent>);

};