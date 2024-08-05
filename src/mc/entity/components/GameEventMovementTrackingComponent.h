#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventMovementTrackingComponent {
public:
    // prevent constructor by default
    GameEventMovementTrackingComponent& operator=(GameEventMovementTrackingComponent const&);
    GameEventMovementTrackingComponent(GameEventMovementTrackingComponent const&);
    GameEventMovementTrackingComponent();

public:
    // NOLINTBEGIN
    MCAPI void initializeFromCode(class Actor& actor, bool);

    MCAPI bool shouldEmitEntityMoveGameEvent();

    MCAPI bool shouldEmitFlapGameEvent();

    MCAPI bool shouldEmitSwimGameEvent();

    // NOLINTEND
};
