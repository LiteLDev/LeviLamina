#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ChangeDimensionRequest;
class DimensionStateComponent;
class Player;
class StrictEntityContext;
struct PlayerChangeDimensionRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class DimensionTransitionSystem {
public:
    // DimensionTransitionSystem inner types define
    using DimensionRequestHandler = ::std::function<bool(::Player&, ::ChangeDimensionRequest&)>;

    using IsSuspended = ::std::function<bool(::Player&)>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createPortalTransition();

#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo createReadyToContinueClient();
#endif

    MCAPI static ::TickingSystemWithInfo createReadyToContinueServer();

    MCAPI static ::TickingSystemWithInfo createVehicleDismount();

    MCAPI static void requestPlayerChangeDimension(
        ::StrictEntityContext const&                                                      player,
        ::ChangeDimensionRequest&&                                                        request,
        ::ViewT<::StrictEntityContext, ::DimensionStateComponent, ::StateVectorComponent> playerData,
        ::EntityModifier<::PlayerChangeDimensionRequestComponent>                         modifier
    );

    MCAPI static void tryHandleChangeDimensionRequestLevel(
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
