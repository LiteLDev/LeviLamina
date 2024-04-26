#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class InitialTickFilterSystem {
public:
    // prevent constructor by default
    InitialTickFilterSystem& operator=(InitialTickFilterSystem const&);
    InitialTickFilterSystem(InitialTickFilterSystem const&);
    InitialTickFilterSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?blockFilterTickEntity@InitialTickFilterSystem@@SAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAV?$EntityModifier@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void blockFilterTickEntity(
        class StrictEntityContext const& context,
        struct StateVectorComponent const&,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>>& modifier,
        class IConstBlockSource const&                                                 region
    );

    // symbol: ?createBlockFilterSystem@InitialTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createBlockFilterSystem();

    // symbol: ?createTickingAreaFilterSystem@InitialTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTickingAreaFilterSystem();

    // symbol:
    // ?tickingAreaFilterTickEntity@InitialTickFilterSystem@@SAXAEAVStrictEntityContext@@AEAVTickWorldComponent@@AEBUCurrentTickComponent@@AEAV?$EntityModifier@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@Z
    MCAPI static void tickingAreaFilterTickEntity(
        class StrictEntityContext& context,
        class TickWorldComponent&,
        struct CurrentTickComponent const&,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>>& modifier
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickingAreaFilterTickView@InitialTickFilterSystem@@CAXV?$OptionalGlobal@$$CBUCurrentTickComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@VTickWorldComponent@@@@V?$EntityModifier@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@Z
    MCAPI static void _tickingAreaFilterTickView(
        class OptionalGlobal<struct CurrentTickComponent const>,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class TickWorldComponent>                                                 view,
        class EntityModifier<class FlagComponent<struct ActorMovementTickNeededFlag>> modifier
    );

    // NOLINTEND
};
