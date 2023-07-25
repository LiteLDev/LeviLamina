#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

class VariableMaxAutoStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIABLEMAXAUTOSTEPSYSTEM
public:
    VariableMaxAutoStepSystem& operator=(VariableMaxAutoStepSystem const&) = delete;
    VariableMaxAutoStepSystem(VariableMaxAutoStepSystem const&)            = delete;
    VariableMaxAutoStepSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@VariableMaxAutoStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_tickEntity\@VariableMaxAutoStepSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@AEBUVariableMaxAutoStepComponent\@\@AEAUMaxAutoStepComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBVActorMovementProxyComponent\@\@\@Z
     */
    MCAPI static void
    _tickEntity(class StrictEntityContext const&, class Optional<struct VehicleComponent const>, struct VariableMaxAutoStepComponent const&, struct MaxAutoStepComponent&, struct AABBShapeComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, class ActorMovementProxyComponent const&);

private:
};
