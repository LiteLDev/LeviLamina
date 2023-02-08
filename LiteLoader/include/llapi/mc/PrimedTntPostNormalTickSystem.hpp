/**
 * @file  PrimedTntPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PrimedTntPostNormalTickSystem.
 *
 */
class PrimedTntPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNTPOSTNORMALTICKSYSTEM
public:
    class PrimedTntPostNormalTickSystem& operator=(class PrimedTntPostNormalTickSystem const &) = delete;
    PrimedTntPostNormalTickSystem(class PrimedTntPostNormalTickSystem const &) = delete;
    PrimedTntPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @hash   1444407758
     * @symbol  ?createSystem\@PrimedTntPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   -989712131
     * @symbol  ?_doPrimedTntPostNormalTickSystem\@PrimedTntPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doPrimedTntPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};