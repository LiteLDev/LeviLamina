/**
 * @file  FreezingSystemInternal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace FreezingSystemInternal.
 *
 */
namespace FreezingSystemInternal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1252874632
     * @symbol ?processFreezeEffect@FreezingSystemInternal@@YAXAEAVActor@@AEBVFreezingComponent@@@Z
     */
    MCAPI void processFreezeEffect(class Actor &, class FreezingComponent const &);
    /**
     * @hash   290212004
     * @symbol ?tickFreezeComponent@FreezingSystemInternal@@YAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VFreezingComponent@@@@@Z
     */
    MCAPI void tickFreezeComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class FreezingComponent> &);

};