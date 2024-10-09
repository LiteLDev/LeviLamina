#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class DimensionTransitionSystem {
public:
    // prevent constructor by default
    DimensionTransitionSystem& operator=(DimensionTransitionSystem const&);
    DimensionTransitionSystem(DimensionTransitionSystem const&);
    DimensionTransitionSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tickPortalTransition(
        class ViewT<
            class StrictEntityContext,
            struct Exclude<struct PassengerComponent, struct VehicleComponent>,
            class ActorOwnerComponent,
            struct DimensionTransitionComponent const>            view,
        class EntityModifier<struct DimensionTransitionComponent> mod
    );

    MCAPI static void _tickVehicleDismount(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerChangeDimensionRequestComponent, struct PassengerComponent>> passengers,
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PlayerChangeDimensionRequestComponent>,
            struct VehicleComponent const> vehicles,
        class EntityModifier<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>> modifier
    );

    MCAPI static struct TickingSystemWithInfo createPortalTransition();

    MCAPI static struct TickingSystemWithInfo createReadyToContinueServer();

    MCAPI static struct TickingSystemWithInfo createVehicleDismount();

    MCAPI static void removeChangeDimensionRequest(
        class StrictEntityContext const&                                   entity,
        class EntityModifier<struct PlayerChangeDimensionRequestComponent> modifier
    );

    MCAPI static void requestPlayerChangeDimension(
        class StrictEntityContext const&                                                                   player,
        class ChangeDimensionRequest&&                                                                     request,
        class ViewT<class StrictEntityContext, class DimensionStateComponent, struct StateVectorComponent> playerData,
        class EntityModifier<struct PlayerChangeDimensionRequestComponent>                                 modifier
    );

    MCAPI static bool shouldLevelWaitForSystem(
        class StrictEntityContext const&                                                           entity,
        class ViewT<class StrictEntityContext, struct PlayerChangeDimensionRequestComponent const> view
    );

    MCAPI static void tryHandleChangeDimensionRequestLevel(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>>,
            struct PlayerChangeDimensionRequestComponent,
            class ActorOwnerComponent>                                           requests,
        class EntityModifier<struct PlayerChangeDimensionRequestComponent>       modifier,
        std::function<bool(class Player&, class ChangeDimensionRequest&)> const& callback,
        std::function<bool(class Player&)> const&                                isSuspended
    );

    // NOLINTEND
};
