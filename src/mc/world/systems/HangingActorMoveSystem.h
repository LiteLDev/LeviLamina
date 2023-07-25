#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HangingActorMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGACTORMOVESYSTEM
public:
    HangingActorMoveSystem& operator=(HangingActorMoveSystem const&) = delete;
    HangingActorMoveSystem(HangingActorMoveSystem const&)            = delete;
    HangingActorMoveSystem()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?createSystems\@HangingActorMoveSystem\@\@SA?AV?$vector\@UTickingSystemWithInfo\@\@V?$allocator\@UTickingSystemWithInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<struct TickingSystemWithInfo> createSystems();
};
