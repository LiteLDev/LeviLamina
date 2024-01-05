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
    // symbol: ?initializeFromCode@GameEventMovementTrackingComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void initializeFromCode(class Actor& actor, bool);

    // symbol: ?shouldEmitEntityMoveGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
    MCAPI bool shouldEmitEntityMoveGameEvent();

    // symbol: ?shouldEmitFlapGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
    MCAPI bool shouldEmitFlapGameEvent();

    // symbol: ?shouldEmitSwimGameEvent@GameEventMovementTrackingComponent@@QEAA_NXZ
    MCAPI bool shouldEmitSwimGameEvent();

    // NOLINTEND
};
