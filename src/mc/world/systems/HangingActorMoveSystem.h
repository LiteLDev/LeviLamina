#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HangingActorMoveSystem {

public:
    // prevent constructor by default
    HangingActorMoveSystem& operator=(HangingActorMoveSystem const&) = delete;
    HangingActorMoveSystem(HangingActorMoveSystem const&)            = delete;
    HangingActorMoveSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createSystems\@HangingActorMoveSystem\@\@SA?AV?$vector\@UTickingSystemWithInfo\@\@V?$allocator\@UTickingSystemWithInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<struct TickingSystemWithInfo> createSystems();
    // NOLINTEND
};
