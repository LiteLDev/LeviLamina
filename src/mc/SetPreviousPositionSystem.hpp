/**
 * @file  SetPreviousPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SetPreviousPositionSystem.
 *
 */
class SetPreviousPositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSPOSITIONSYSTEM
public:
    class SetPreviousPositionSystem& operator=(class SetPreviousPositionSystem const &) = delete;
    SetPreviousPositionSystem(class SetPreviousPositionSystem const &) = delete;
    SetPreviousPositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@SetPreviousPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doSetPreviousPositionSystem\@SetPreviousPositionSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _doSetPreviousPositionSystem(class StrictEntityContext const &, struct StateVectorComponent &);

private:

};