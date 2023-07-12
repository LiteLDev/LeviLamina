/**
 * @file  GlidingMoveFinalizeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GlidingMoveFinalizeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDINGMOVEFINALIZESYSTEM
public:
    class GlidingMoveFinalizeSystem& operator=(class GlidingMoveFinalizeSystem const &) = delete;
    GlidingMoveFinalizeSystem(class GlidingMoveFinalizeSystem const &) = delete;
    GlidingMoveFinalizeSystem() = delete;
#endif

public:
    /**
     * @symbol ?_tickCollisionDamageCalculate\@GlidingMoveFinalizeSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMobTravelComponent\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UGlidingCollisionDamageComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _tickCollisionDamageCalculate(class StrictEntityContext const &, struct MobTravelComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct GlidingCollisionDamageComponent> &, class IConstBlockSource const &);
    /**
     * @symbol ?_tickCollisionDamageHurt\@GlidingMoveFinalizeSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEBUGlidingCollisionDamageComponent\@\@\@Z
     */
    MCAPI static void _tickCollisionDamageHurt(class StrictEntityContext &, class ActorOwnerComponent &, struct GlidingCollisionDamageComponent const &);
    /**
     * @symbol ?createCollisionDamageCalculateSystem\@GlidingMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCollisionDamageCalculateSystem();
    /**
     * @symbol ?createCollisionDamageHurtSystem\@GlidingMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCollisionDamageHurtSystem();

};
