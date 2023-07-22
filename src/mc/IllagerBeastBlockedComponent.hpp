/**
 * @file  IllagerBeastBlockedComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IllagerBeastBlockedComponent.
 *
 */
class IllagerBeastBlockedComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTBLOCKEDCOMPONENT
public:
    class IllagerBeastBlockedComponent& operator=(class IllagerBeastBlockedComponent const &) = delete;
    IllagerBeastBlockedComponent(class IllagerBeastBlockedComponent const &) = delete;
    IllagerBeastBlockedComponent() = delete;
#endif

public:
    /**
     * @symbol  ?initFromDefinition\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?onBlocked\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@0\@Z
     */
    MCAPI void onBlocked(class Actor &, class ActorDamageSource const &, class Actor &);

};