/**
 * @file  EyeOfEnderPreNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EyeOfEnderPreNormalTickSystem.
 *
 */
class EyeOfEnderPreNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EYEOFENDERPRENORMALTICKSYSTEM
public:
    class EyeOfEnderPreNormalTickSystem& operator=(class EyeOfEnderPreNormalTickSystem const &) = delete;
    EyeOfEnderPreNormalTickSystem(class EyeOfEnderPreNormalTickSystem const &) = delete;
    EyeOfEnderPreNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@EyeOfEnderPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doEyeOfEnderPreNormalTickSystem\@EyeOfEnderPreNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);
    /**
     * @symbol ?_tickEyeOfEnderPreNormalTickSystem\@EyeOfEnderPreNormalTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UEyeOfEnderFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickEyeOfEnderPreNormalTickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct EyeOfEnderFlag>>, class ActorOwnerComponent>);

private:

};
