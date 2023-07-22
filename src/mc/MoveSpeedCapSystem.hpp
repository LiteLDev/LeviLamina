/**
 * @file  MoveSpeedCapSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveSpeedCapSystem.
 *
 */
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
     * @symbol  ?create\@MoveSpeedCapSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};