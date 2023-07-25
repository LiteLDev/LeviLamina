#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TripodCameraComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERACOMPONENT
public:
    TripodCameraComponent& operator=(TripodCameraComponent const&) = delete;
    TripodCameraComponent(TripodCameraComponent const&)            = delete;
    TripodCameraComponent()                                        = delete;
#endif

public:
    /**
     * @symbol ?getInteraction\@TripodCameraComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
};
