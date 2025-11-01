#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct PassengerYRotLimitComponent;
struct PassengersToPositionComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace VehicleClientPositionPassenger {
// functions
// NOLINTBEGIN
MCNAPI void setPositionRequestSystem(::ViewT<::StrictEntityContext, ::ActorDataSeatOffsetComponent const> passengerView, ::ViewT<::StrictEntityContext, ::RenderPositionComponent const, ::RenderRotationComponent const> vehicleView, ::OptionalGlobal<::PassengersToPositionComponent> passengersToPositionComponent, ::EntityModifier<::ActorSetPositionRequestComponent> modifier);

MCNAPI void setRotationLockSystem(::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::SynchedActorDataComponent const, ::ActorHeadRotationComponent const, ::MobBodyRotationComponent, ::PassengerYRotLimitComponent> passengerView, ::ViewT<::StrictEntityContext, ::RenderRotationComponent const> vehicleView, ::OptionalGlobal<::PassengersToPositionComponent> passengersToPositionComponent);
// NOLINTEND

}
