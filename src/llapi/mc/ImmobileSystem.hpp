/**
 * @file  ImmobileSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ImmobileSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMMOBILESYSTEM
public:
    class ImmobileSystem& operator=(class ImmobileSystem const &) = delete;
    ImmobileSystem(class ImmobileSystem const &) = delete;
    ImmobileSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ImmobileSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?doImmobileSystem\@ImmobileSystem\@\@CAXAEBVStrictEntityContext\@\@AEAULocalMoveVelocityComponent\@\@AEAUMobRotationComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doImmobileSystem(class StrictEntityContext const &, struct LocalMoveVelocityComponent &, struct MobRotationComponent &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>);

private:

};