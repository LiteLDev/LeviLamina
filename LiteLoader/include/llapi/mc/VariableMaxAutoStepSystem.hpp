/**
 * @file  VariableMaxAutoStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VariableMaxAutoStepSystem.
 *
 */
class VariableMaxAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIABLEMAXAUTOSTEPSYSTEM
public:
    class VariableMaxAutoStepSystem& operator=(class VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem(class VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@VariableMaxAutoStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickEntity\@VariableMaxAutoStepSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@AEBUVariableMaxAutoStepComponent\@\@AEAUMaxAutoStepComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBVActorMovementProxyComponent\@\@\@Z
     */
    MCAPI static void _tickEntity(class StrictEntityContext const &, class Optional<struct VehicleComponent const>, struct VariableMaxAutoStepComponent const &, struct MaxAutoStepComponent &, struct AABBShapeComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, class ActorMovementProxyComponent const &);

private:

};
