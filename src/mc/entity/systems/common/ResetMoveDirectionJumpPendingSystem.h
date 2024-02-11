#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetMoveDirectionJumpPendingSystem {
public:
    // prevent constructor by default
    ResetMoveDirectionJumpPendingSystem& operator=(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createResetMoveDirectionJumpPendingSystem@ResetMoveDirectionJumpPendingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();

    // NOLINTEND
};
