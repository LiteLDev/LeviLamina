#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GiveableComponent {

public:
    // prevent constructor by default
    GiveableComponent& operator=(GiveableComponent const&) = delete;
    GiveableComponent(GiveableComponent const&)            = delete;
    GiveableComponent()                                    = delete;

public:
    /**
     * @symbol ?getInteraction\@GiveableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
};
