#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TripodCameraComponent {
public:
    // prevent constructor by default
    TripodCameraComponent& operator=(TripodCameraComponent const&);
    TripodCameraComponent(TripodCameraComponent const&);
    TripodCameraComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@TripodCameraComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
