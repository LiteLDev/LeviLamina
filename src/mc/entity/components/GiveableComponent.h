#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GiveableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLECOMPONENT
public:
    GiveableComponent& operator=(GiveableComponent const&) = delete;
    GiveableComponent(GiveableComponent const&)            = delete;
    GiveableComponent()                                    = delete;
#endif

public:
    /**
     * @symbol ?getInteraction\@GiveableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
};
