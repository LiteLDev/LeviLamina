#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class StrictEntityContext;
class Vec3;
struct ActorMovementTickNeededComponent;
struct CurrentTickComponent;
struct PassengerRenderingRidingOffsetComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
struct VehicleRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _tickEntity(
        ::StrictEntityContext const&,
        ::VehicleComponent const&                                   vehicleComponent,
        ::ActorOwnerComponent&                                      actorOwnerComponent,
        ::VehicleRenderingRidingOffsetComponent&                    vehicleOffsetComponent,
        ::CurrentTickComponent const&                               currentTickComponent,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent> modifier
    );

    MCNAPI_C static void _tickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent>,
            ::VehicleComponent const,
            ::ActorOwnerComponent,
            ::VehicleRenderingRidingOffsetComponent>                view,
        ::OptionalGlobal<::CurrentTickComponent const>              currentTickComponent,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent> modifier
    );

    MCNAPI_C static ::TickingSystemWithInfo createSystem();

    MCNAPI_C static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const& actor, float frameAlpha);

    MCNAPI_C static void onActorStartRiding(::Actor& actor, ::Actor& vehicle);
    // NOLINTEND
};
