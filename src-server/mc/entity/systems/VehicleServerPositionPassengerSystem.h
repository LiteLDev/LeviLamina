#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
struct PassengersToPositionComponent;
struct PlayerComponent;
struct PositionPassengerRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct VehicleComponent;
// clang-format on

class VehicleServerPositionPassengerSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _vehicleServerPositionPassengerSystemSingleEntity(::StrictEntityContext const&, ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent, ::PositionPassengerRequestComponent>, ::ActorDataSeatOffsetComponent const> positionPassengerView, ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent, ::MobFlagComponent>, ::ActorHeadRotationComponent const, ::PositionPassengerRequestComponent const, ::SynchedActorDataComponent const, ::ActorRotationComponent, ::MobBodyRotationComponent, ::PassengerYRotLimitComponent, ::Optional<::PlayerComponent const>> rotatePassengerView, ::EntityModifier<::ActorSetPositionRequestComponent> modifier, ::OptionalGlobal<::PassengersToPositionComponent> passengersToPositionComponent, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::ActorRotationComponent const, ::StateVectorComponent const, ::Optional<::ActorSetPositionRequestComponent const>> vehicleView);
    // NOLINTEND

};
