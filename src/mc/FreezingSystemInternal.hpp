/**
 * @file  FreezingSystemInternal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?processFreezeEffect\@FreezingSystemInternal\@\@YAXAEAVActor\@\@AEBVFreezingComponent\@\@\@Z
     */
    MCAPI void processFreezeEffect(class Actor &, class FreezingComponent const &);
    /**
     * @symbol  ?tickFreezeComponent\@FreezingSystemInternal\@\@YAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVFreezingComponent\@\@\@Z
     */
    MCAPI void tickFreezeComponent(class EntityContext &, class ActorOwnerComponent &, class FreezingComponent &);

};