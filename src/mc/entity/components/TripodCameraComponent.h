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
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
