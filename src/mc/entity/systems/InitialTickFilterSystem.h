#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class InitialTickFilterSystem {

public:
    // prevent constructor by default
    InitialTickFilterSystem& operator=(InitialTickFilterSystem const&) = delete;
    InitialTickFilterSystem(InitialTickFilterSystem const&)            = delete;
    InitialTickFilterSystem()                                          = delete;

public:
    /**
     * @symbol
     * ?blockFilterTickEntity\@InitialTickFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    blockFilterTickEntity(class StrictEntityContext const&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>>&, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol ?createBlockFilterSystem\@InitialTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBlockFilterSystem(); // NOLINT
    /**
     * @symbol ?createTickingAreaFilterSystem\@InitialTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTickingAreaFilterSystem(); // NOLINT
    /**
     * @symbol
     * ?tickingAreaFilterTickEntity\@InitialTickFilterSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVTickWorldComponent\@\@AEBUCurrentTickComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    tickingAreaFilterTickEntity(class StrictEntityContext&, class TickWorldComponent&, struct CurrentTickComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>>&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_blockFilterTickView\@InitialTickFilterSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@$$CBUStateVectorComponent\@\@U?$Exclude\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UGlobalActorFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$OptionalGlobalT\@$$CBULocalConstBlockSourceFactoryComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _blockFilterTickView(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent const, struct Exclude<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct GlobalActorFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct DimensionTypeComponent const>, class OptionalGlobalT<struct LocalConstBlockSourceFactoryComponent const, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>>); // NOLINT
    /**
     * @symbol
     * ?_tickingAreaFilterTickView\@InitialTickFilterSystem\@\@CAXV?$OptionalGlobalT\@$$CBUCurrentTickComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@VTickWorldComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickingAreaFilterTickView(class OptionalGlobalT<struct CurrentTickComponent const, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class TickWorldComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorMovementTickNeededFlag>>); // NOLINT

private:
};
