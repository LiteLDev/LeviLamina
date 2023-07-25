#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastBlockedComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTBLOCKEDCOMPONENT
public:
    IllagerBeastBlockedComponent& operator=(IllagerBeastBlockedComponent const&) = delete;
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent const&)            = delete;
    IllagerBeastBlockedComponent()                                               = delete;
#endif

public:
    /**
     * @symbol ?initFromDefinition\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?onBlocked\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@0\@Z
     */
    MCAPI void onBlocked(class Actor&, class ActorDamageSource const&, class Actor&);
};
