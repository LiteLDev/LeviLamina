/**
 * @file  CheckFallDamageSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CheckFallDamageSystem.
 *
 */
class CheckFallDamageSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHECKFALLDAMAGESYSTEM
public:
    class CheckFallDamageSystem& operator=(class CheckFallDamageSystem const &) = delete;
    CheckFallDamageSystem(class CheckFallDamageSystem const &) = delete;
    CheckFallDamageSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_checkFallDamage\@CheckFallDamageSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUCheckFallDamageRequestComponent\@\@\@Z
     */
    MCAPI static void _checkFallDamage(class StrictEntityContext &, class ActorOwnerComponent &, struct CheckFallDamageRequestComponent &);
    /**
     * @symbol  ?createSystem\@CheckFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};