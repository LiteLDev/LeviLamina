/**
 * @file  GroundAndAirMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GroundAndAirMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDANDAIRMOVESYSTEM
public:
    class GroundAndAirMoveSystem& operator=(class GroundAndAirMoveSystem const &) = delete;
    GroundAndAirMoveSystem(class GroundAndAirMoveSystem const &) = delete;
    GroundAndAirMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAirMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveSystem();
    /**
     * @symbol ?createGroundMoveSystem\@GroundAndAirMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveSystem();

};
