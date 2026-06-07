#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataJumpDurationComponent;
struct ActorMovementTickNeededComponent;
struct ExitFromPassengerFlagComponent;
struct JumpTicksComponent;
struct MobIsJumpingFlagComponent;
struct MobJumpComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

struct JumpEndSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent>,
            ::Optional<::VehicleComponent const>,
            ::StateVectorComponent const,
            ::ActorDataDirtyFlagsComponent,
            ::ActorDataJumpDurationComponent,
            ::JumpTicksComponent,
            ::MobJumpComponent> view,
        ::ViewT<::StrictEntityContext, ::Include<::ParrotFlagComponent>, ::PassengerComponent const>
            parrotPassengersView,
        ::EntityModifier<::ExitFromPassengerFlagComponent, ::StopRidingRequestComponent, ::MobIsJumpingFlagComponent>
            mod
    );
    // NOLINTEND
};
