#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ChangeDimensionRequest;
class DimensionStateComponent;
class Player;
class StrictEntityContext;
struct DimensionTransitionComponent;
struct ExitFromPassengerFlagComponent;
struct PassengerComponent;
struct PlayerChangeDimensionRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class DimensionTransitionSystem {
public:
    // DimensionTransitionSystem inner types define
    using DimensionRequestHandler = ::std::function<bool(::Player&, ::ChangeDimensionRequest&)>;

    using IsSuspended = ::std::function<bool(::Player&)>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickPortalTransition(
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<::PassengerComponent, ::VehicleComponent>,
            ::ActorOwnerComponent,
            ::DimensionTransitionComponent const>        view,
        ::EntityModifier<::DimensionTransitionComponent> mod
    );

    MCNAPI static void _tickReadyToContinueServer(
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<::PassengerComponent, ::VehicleComponent, ::DimensionTransitionComponent>,
            ::PlayerChangeDimensionRequestComponent> view
    );

    MCNAPI static void _tickVehicleDismount(
        ::ViewT<::StrictEntityContext, ::Include<::PlayerChangeDimensionRequestComponent, ::PassengerComponent>>
            passengers,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerChangeDimensionRequestComponent>, ::VehicleComponent const>
                                                                                         vehicles,
        ::EntityModifier<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent> modifier
    );

    MCNAPI static ::TickingSystemWithInfo createPortalTransition();

    MCNAPI static ::TickingSystemWithInfo createVehicleDismount();

    MCNAPI static void requestPlayerChangeDimension(
        ::StrictEntityContext const&                                                      player,
        ::ChangeDimensionRequest&&                                                        request,
        ::ViewT<::StrictEntityContext, ::DimensionStateComponent, ::StateVectorComponent> playerData,
        ::EntityModifier<::PlayerChangeDimensionRequestComponent>                         modifier
    );

    MCNAPI static void tryHandleChangeDimensionRequestLevel(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::PlayerChangeDimensionRequestComponent,
            ::ActorOwnerComponent>                                         requests,
        ::EntityModifier<::PlayerChangeDimensionRequestComponent>          modifier,
        ::std::function<bool(::Player&, ::ChangeDimensionRequest&)> const& callback,
        ::std::function<bool(::Player&)> const&                            isSuspended
    );
    // NOLINTEND
};
