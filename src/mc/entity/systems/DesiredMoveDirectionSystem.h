#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DesiredMoveDirectionSystem {
public:
    // prevent constructor by default
    DesiredMoveDirectionSystem& operator=(DesiredMoveDirectionSystem const&);
    DesiredMoveDirectionSystem(DesiredMoveDirectionSystem const&);
    DesiredMoveDirectionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createDesiredMoveDirectionSystem@DesiredMoveDirectionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createDesiredMoveDirectionSystem();

    // NOLINTEND
};
