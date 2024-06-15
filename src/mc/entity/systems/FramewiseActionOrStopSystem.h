#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FramewiseActionOrStopSystem {
public:
    // prevent constructor by default
    FramewiseActionOrStopSystem& operator=(FramewiseActionOrStopSystem const&);
    FramewiseActionOrStopSystem(FramewiseActionOrStopSystem const&);
    FramewiseActionOrStopSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createFramewiseActionOrStopSystem@FramewiseActionOrStopSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createFramewiseActionOrStopSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doFramewiseActionOrStopSystem@FramewiseActionOrStopSystem@@CAXAEBULocalMoveVelocityComponent@@AEAUActionOrStopComponent@@@Z
    MCAPI static void
    doFramewiseActionOrStopSystem(struct LocalMoveVelocityComponent const&, struct ActionOrStopComponent&);

    // NOLINTEND
};
