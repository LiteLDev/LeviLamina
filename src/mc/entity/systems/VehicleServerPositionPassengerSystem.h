#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

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
struct PlayerComponent;
struct PositionPassengerRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerPositionPassengerSystem {
public:
    // prevent constructor by default
    VehicleServerPositionPassengerSystem& operator=(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
