#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class DimensionTransitionSystem {
public:
    // prevent constructor by default
    DimensionTransitionSystem& operator=(DimensionTransitionSystem const&);
    DimensionTransitionSystem(DimensionTransitionSystem const&);
    DimensionTransitionSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_tickPortalTransition@DimensionTransitionSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Exclude@UPassengerComponent@@UVehicleComponent@@@@VActorOwnerComponent@@$$CBUDimensionTransitionComponent@@@@V?$EntityModifier@UDimensionTransitionComponent@@@@@Z
    MCAPI static void _tickPortalTransition(
        class ViewT<
            class StrictEntityContext,
            struct Exclude<struct PassengerComponent, struct VehicleComponent>,
            class ActorOwnerComponent,
            struct DimensionTransitionComponent const>            view,
        class EntityModifier<struct DimensionTransitionComponent> mod
    );

    // symbol:
    // ?_tickReadyToContinueServer@DimensionTransitionSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Exclude@UPassengerComponent@@UVehicleComponent@@UDimensionTransitionComponent@@@@UPlayerChangeDimensionRequestComponent@@@@@Z
    MCAPI static void _tickReadyToContinueServer(
        class ViewT<
            class StrictEntityContext,
            struct Exclude<struct PassengerComponent, struct VehicleComponent, struct DimensionTransitionComponent>,
            struct PlayerChangeDimensionRequestComponent> view
    );

    // symbol:
    // ?_tickVehicleDismount@DimensionTransitionSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UPlayerChangeDimensionRequestComponent@@UPassengerComponent@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UPlayerChangeDimensionRequestComponent@@@@$$CBUVehicleComponent@@@@V?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UExitFromPassengerFlag@@@@@@@Z
    MCAPI static void _tickVehicleDismount(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerChangeDimensionRequestComponent, struct PassengerComponent>>,
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerChangeDimensionRequestComponent>,
            struct VehicleComponent const>,
        class EntityModifier<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>> modifier
    );

    // symbol: ?createPortalTransition@DimensionTransitionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPortalTransition();

    // symbol: ?createReadyToContinueServer@DimensionTransitionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createReadyToContinueServer();

    // symbol: ?createVehicleDismount@DimensionTransitionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createVehicleDismount();

    // symbol:
    // ?removeChangeDimensionRequest@DimensionTransitionSystem@@SAXAEBVStrictEntityContext@@V?$EntityModifier@UPlayerChangeDimensionRequestComponent@@@@@Z
    MCAPI static void
    removeChangeDimensionRequest(class StrictEntityContext const&, class EntityModifier<struct PlayerChangeDimensionRequestComponent>);

    // symbol:
    // ?requestPlayerChangeDimension@DimensionTransitionSystem@@SAXAEBVStrictEntityContext@@$$QEAVChangeDimensionRequest@@V?$ViewT@VStrictEntityContext@@VDimensionStateComponent@@UStateVectorComponent@@@@V?$EntityModifier@UPlayerChangeDimensionRequestComponent@@@@@Z
    MCAPI static void
    requestPlayerChangeDimension(class StrictEntityContext const&, class ChangeDimensionRequest&&, class ViewT<class StrictEntityContext, class DimensionStateComponent, struct StateVectorComponent>, class EntityModifier<struct PlayerChangeDimensionRequestComponent>);

    // symbol:
    // ?shouldLevelWaitForSystem@DimensionTransitionSystem@@SA_NAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@$$CBUPlayerChangeDimensionRequestComponent@@@@@Z
    MCAPI static bool shouldLevelWaitForSystem(
        class StrictEntityContext const&                                                           entity,
        class ViewT<class StrictEntityContext, struct PlayerChangeDimensionRequestComponent const> view
    );

    // symbol:
    // ?tryHandleChangeDimensionRequestLevel@DimensionTransitionSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@UPlayerChangeDimensionRequestComponent@@VActorOwnerComponent@@@@V?$EntityModifier@UPlayerChangeDimensionRequestComponent@@@@AEBV?$function@$$A6A_NAEAVPlayer@@AEAVChangeDimensionRequest@@@Z@std@@AEBV?$function@$$A6A_NAEAVPlayer@@@Z@5@@Z
    MCAPI static void
    tryHandleChangeDimensionRequestLevel(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct PlayerChangeDimensionRequestComponent, class ActorOwnerComponent>, class EntityModifier<struct PlayerChangeDimensionRequestComponent> modifier, std::function<bool(class Player&, class ChangeDimensionRequest&)> const& callback, std::function<bool(class Player&)> const&);

    // NOLINTEND
};
