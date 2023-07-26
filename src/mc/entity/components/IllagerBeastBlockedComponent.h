#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastBlockedComponent {

public:
    // prevent constructor by default
    IllagerBeastBlockedComponent& operator=(IllagerBeastBlockedComponent const&) = delete;
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent const&)            = delete;
    IllagerBeastBlockedComponent()                                               = delete;

public:
    /**
     * @symbol ?initFromDefinition\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?onBlocked\@IllagerBeastBlockedComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@0\@Z
     */
    MCAPI void onBlocked(class Actor&, class ActorDamageSource const&, class Actor&); // NOLINT
};
