#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SitComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITCOMPONENT
public:
    SitComponent& operator=(SitComponent const&) = delete;
    SitComponent(SitComponent const&)            = delete;
    SitComponent()                               = delete;
#endif

public:
    /**
     * @symbol ?getInteraction\@SitComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
};
