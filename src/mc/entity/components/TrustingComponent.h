#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustingComponent {

public:
    // prevent constructor by default
    TrustingComponent& operator=(TrustingComponent const&) = delete;
    TrustingComponent(TrustingComponent const&)            = delete;

public:
    /**
     * @symbol ??0TrustingComponent\@\@QEAA\@XZ
     */
    MCAPI TrustingComponent(); // NOLINT
    /**
     * @symbol ?getInteraction\@TrustingComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT

    // private:
    /**
     * @symbol ?_becomeTrusting\@TrustingComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _becomeTrusting(class Actor&); // NOLINT

private:
};
