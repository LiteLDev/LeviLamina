/**
 * @file  GroundAndAirMoveFinalizeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GroundAndAirMoveFinalizeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDANDAIRMOVEFINALIZESYSTEM
public:
    class GroundAndAirMoveFinalizeSystem& operator=(class GroundAndAirMoveFinalizeSystem const &) = delete;
    GroundAndAirMoveFinalizeSystem(class GroundAndAirMoveFinalizeSystem const &) = delete;
    GroundAndAirMoveFinalizeSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAirMoveFinalizeSideBySideSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveFinalizeSideBySideSystem();
    /**
     * @symbol ?createAirMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirMoveFinalizeSystem();
    /**
     * @symbol ?createGroundMoveFinalizeSideBySideSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveFinalizeSideBySideSystem();
    /**
     * @symbol ?createGroundMoveFinalizeSystem\@GroundAndAirMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGroundMoveFinalizeSystem();

};
