/**
 * @file  HangingActorMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class HangingActorMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGACTORMOVESYSTEM
public:
    class HangingActorMoveSystem& operator=(class HangingActorMoveSystem const &) = delete;
    HangingActorMoveSystem(class HangingActorMoveSystem const &) = delete;
    HangingActorMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystems\@HangingActorMoveSystem\@\@SA?AV?$vector\@UTickingSystemWithInfo\@\@V?$allocator\@UTickingSystemWithInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<struct TickingSystemWithInfo> createSystems();

};
