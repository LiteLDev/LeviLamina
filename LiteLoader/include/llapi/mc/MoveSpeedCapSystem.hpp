/**
 * @file  MC/MoveSpeedCapSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MoveSpeedCapSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVESPEEDCAPSYSTEM
public:
    class MoveSpeedCapSystem& operator=(class MoveSpeedCapSystem const &) = delete;
    MoveSpeedCapSystem(class MoveSpeedCapSystem const &) = delete;
    MoveSpeedCapSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@MoveSpeedCapSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};