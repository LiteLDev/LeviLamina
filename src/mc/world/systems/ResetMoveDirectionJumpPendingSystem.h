#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetMoveDirectionJumpPendingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETMOVEDIRECTIONJUMPPENDINGSYSTEM
public:
    ResetMoveDirectionJumpPendingSystem& operator=(ResetMoveDirectionJumpPendingSystem const&) = delete;
    ResetMoveDirectionJumpPendingSystem(ResetMoveDirectionJumpPendingSystem const&)            = delete;
    ResetMoveDirectionJumpPendingSystem()                                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?createResetMoveDirectionJumpPendingSystem\@ResetMoveDirectionJumpPendingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();
};
