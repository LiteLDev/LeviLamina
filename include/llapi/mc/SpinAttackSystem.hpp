/**
 * @file  SpinAttackSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpinAttackSystem.
 *
 */
class SpinAttackSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPINATTACKSYSTEM
public:
    class SpinAttackSystem& operator=(class SpinAttackSystem const &) = delete;
    SpinAttackSystem(class SpinAttackSystem const &) = delete;
    SpinAttackSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_spinAttack\@SpinAttackSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _spinAttack(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @symbol  ?createSystem\@SpinAttackSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};