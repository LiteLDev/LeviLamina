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
struct CurrentTickComponent;
struct InterpolateMovementNeededComponent;
struct PassengerRenderingRidingOffsetComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
struct VehicleRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void _tickEntity(
        ::StrictEntityContext const&             vehicleComponent,
        ::VehicleComponent const&                actorOwnerComponent,
        ::ActorOwnerComponent&                   vehicleOffsetComponent,
        ::VehicleRenderingRidingOffsetComponent& currentTickComponent,
        ::CurrentTickComponent const&            modifier,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent>
    );

    MCAPI static void _tickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent>,
            ::VehicleComponent const,
            ::ActorOwnerComponent,
            ::VehicleRenderingRidingOffsetComponent>                view,
        ::OptionalGlobal<::CurrentTickComponent const>              currentTickComponent,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const& actor, float frameAlpha);
#endif

    MCAPI static ::Vec3 getInterpolatedRenderingRidingOffset(
        ::PassengerRenderingRidingOffsetComponent const* passengerOffsetComponent,
        float                                            frameAlpha
    );

#ifdef LL_PLAT_C
    MCAPI static void onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif
    // NOLINTEND
};
