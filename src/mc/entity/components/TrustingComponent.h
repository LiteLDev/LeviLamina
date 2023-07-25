#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGCOMPONENT
public:
    TrustingComponent& operator=(TrustingComponent const&) = delete;
    TrustingComponent(TrustingComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0TrustingComponent\@\@QEAA\@XZ
     */
    MCAPI TrustingComponent();
    /**
     * @symbol ?getInteraction\@TrustingComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

    // private:
    /**
     * @symbol ?_becomeTrusting\@TrustingComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _becomeTrusting(class Actor&);

private:
};
