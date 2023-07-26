#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TripodCameraComponent {

public:
    // prevent constructor by default
    TripodCameraComponent& operator=(TripodCameraComponent const&) = delete;
    TripodCameraComponent(TripodCameraComponent const&)            = delete;
    TripodCameraComponent()                                        = delete;

public:
    /**
     * @symbol ?getInteraction\@TripodCameraComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
};
