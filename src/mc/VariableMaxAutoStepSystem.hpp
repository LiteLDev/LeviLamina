/**
 * @file  VariableMaxAutoStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?createSystem\@VariableMaxAutoStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_tickEntity\@VariableMaxAutoStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUVariableMaxAutoStepComponent\@\@AEAUMaxAutoStepComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEBVActorMovementProxyComponent\@\@\@Z
     */
    MCAPI static void _tickEntity(class StrictEntityContext const &, struct VariableMaxAutoStepComponent const &, struct MaxAutoStepComponent &, struct AABBShapeComponent const &, struct StateVectorComponent const &, class ActorMovementProxyComponent const &);
    /**
     * @symbol  ?_tickSystem\@VariableMaxAutoStepSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@VActorTickNeededComponent\@\@\@\@$$CBUVariableMaxAutoStepComponent\@\@UMaxAutoStepComponent\@\@$$CBUAABBShapeComponent\@\@$$CBUStateVectorComponent\@\@$$CBVActorMovementProxyComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class ActorTickNeededComponent>, struct VariableMaxAutoStepComponent const, struct MaxAutoStepComponent, struct AABBShapeComponent const, struct StateVectorComponent const, class ActorMovementProxyComponent const>);

private:

};