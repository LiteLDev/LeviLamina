/**
 * @file  CheckFallDamageInMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CheckFallDamageInMoveSystem.
 *
 */
class CheckFallDamageInMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHECKFALLDAMAGEINMOVESYSTEM
public:
    class CheckFallDamageInMoveSystem& operator=(class CheckFallDamageInMoveSystem const &) = delete;
    CheckFallDamageInMoveSystem(class CheckFallDamageInMoveSystem const &) = delete;
    CheckFallDamageInMoveSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@CheckFallDamageInMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};