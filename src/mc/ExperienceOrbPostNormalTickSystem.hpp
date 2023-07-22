/**
 * @file  ExperienceOrbPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceOrbPostNormalTickSystem.
 *
 */
class ExperienceOrbPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEORBPOSTNORMALTICKSYSTEM
public:
    class ExperienceOrbPostNormalTickSystem& operator=(class ExperienceOrbPostNormalTickSystem const &) = delete;
    ExperienceOrbPostNormalTickSystem(class ExperienceOrbPostNormalTickSystem const &) = delete;
    ExperienceOrbPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ExperienceOrbPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doExperienceOrbPostNormalTickSystem\@ExperienceOrbPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doExperienceOrbPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};