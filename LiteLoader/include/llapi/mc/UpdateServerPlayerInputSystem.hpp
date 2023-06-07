/**
 * @file  UpdateServerPlayerInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UpdateServerPlayerInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESERVERPLAYERINPUTSYSTEM
public:
    class UpdateServerPlayerInputSystem& operator=(class UpdateServerPlayerInputSystem const &) = delete;
    UpdateServerPlayerInputSystem(class UpdateServerPlayerInputSystem const &) = delete;
    UpdateServerPlayerInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createPlayerInputUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerInputUpdateSystem();
    /**
     * @symbol ?createSneakUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSneakUpdateSystem();

};
