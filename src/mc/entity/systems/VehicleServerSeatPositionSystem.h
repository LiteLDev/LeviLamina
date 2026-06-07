#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerSeatPositionSystem {
public:
    // VehicleServerSeatPositionSystem inner types define
    using PassengerView = ::ViewT<
        ::StrictEntityContext,
        ::PassengerComponent const,
        ::PositionPassengerRequestComponent const,
        ::OffsetsComponent const,
        ::ActorDataFlagComponent,
        ::ActorDataSeatOffsetComponent,
        ::ActorDataDirtyFlagsComponent,
        ::SynchedActorDataComponent>;

    using VehicleView = ::ViewT<
        ::StrictEntityContext,
        ::VehicleComponent const,
        ::ActorDataBoundingBoxComponent const,
        ::RideableComponent const>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
