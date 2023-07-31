#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SitComponent {

public:
    // prevent constructor by default
    SitComponent& operator=(SitComponent const&) = delete;
    SitComponent(SitComponent const&)            = delete;
    SitComponent()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getInteraction\@SitComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    // NOLINTEND
};
