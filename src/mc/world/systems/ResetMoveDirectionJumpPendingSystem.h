#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetMoveDirectionJumpPendingSystem {

public:
    // prevent constructor by default
    ResetMoveDirectionJumpPendingSystem& operator=(ResetMoveDirectionJumpPendingSystem const&) = delete;
    ResetMoveDirectionJumpPendingSystem(ResetMoveDirectionJumpPendingSystem const&)            = delete;
    ResetMoveDirectionJumpPendingSystem()                                                      = delete;

public:
    /**
     * @symbol
     * ?createResetMoveDirectionJumpPendingSystem\@ResetMoveDirectionJumpPendingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem(); // NOLINT
};
