#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class StrictEntityContext;
class Vec3;
struct CurrentTickComponent;
struct PassengerRenderingRidingOffsetComponent;
struct VehicleComponent;
struct VehicleRenderingRidingOffsetComponent;
// clang-format on

class RenderingRidingOffsetSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void _tickEntity(
        ::StrictEntityContext const&,
        ::VehicleComponent const&                                          vehicleComponent,
        ::ActorOwnerComponent&                                             actorOwnerComponent,
        ::VehicleRenderingRidingOffsetComponent&                           vehicleOffsetComponent,
        ::CurrentTickComponent const&                                      currentTickComponent,
        ::EntityModifier<::PassengerRenderingRidingOffsetComponent> const& modifier
    );

    MCNAPI static ::Vec3 getInterpolatedRenderingRidingOffset(::Actor const& actor, float frameAlpha);

    MCNAPI static void onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif
    // NOLINTEND
};
