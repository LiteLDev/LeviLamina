#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MinecartComeOffRailSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMEOFFRAILSYSTEM
public:
    MinecartComeOffRailSystem& operator=(MinecartComeOffRailSystem const&) = delete;
    MinecartComeOffRailSystem(MinecartComeOffRailSystem const&)            = delete;
    MinecartComeOffRailSystem()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?_minecartComeOffRailSystem\@MinecartComeOffRailSystem\@\@SAXAEAVStrictEntityContext\@\@AEBVRailMovementComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _minecartComeOffRailSystem(class StrictEntityContext&, class RailMovementComponent const&, struct StateVectorComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);
    /**
     * @symbol ?createSystem\@MinecartComeOffRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_tickMinecartComeOffRailSystem\@MinecartComeOffRailSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@USnapOnRailComponent\@\@\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@$$CBVRailMovementComponent\@\@UStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tickMinecartComeOffRailSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<struct SnapOnRailComponent>, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class RailMovementComponent const, struct StateVectorComponent, class Optional<class FlagComponent<struct OnGroundFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);

private:
};
