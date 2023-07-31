#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SpinAttackSystem {

public:
    // prevent constructor by default
    SpinAttackSystem& operator=(SpinAttackSystem const&) = delete;
    SpinAttackSystem(SpinAttackSystem const&)            = delete;
    SpinAttackSystem()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_spinAttack\@SpinAttackSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _spinAttack(class StrictEntityContext&, class ActorOwnerComponent&);
    /**
     * @symbol
     * ?_tickSpinAttackSystem\@SpinAttackSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSpinAttackSystem(class ViewT<
                                            class StrictEntityContext,
                                            class EntityRegistryBase,
                                            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                            class ActorOwnerComponent>);
    /**
     * @symbol ?createSystem\@SpinAttackSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
