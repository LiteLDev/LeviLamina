#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RideableComponentHelpers { class IRideableActor; }
struct ActorUniqueID;
struct RideableComponentData;
struct StrictActorIDEntityContextPair;
// clang-format on

namespace RideableComponentHelpers {

class VehicleStateProvider {
public:
    // prevent constructor by default
    VehicleStateProvider& operator=(VehicleStateProvider const&);
    VehicleStateProvider(VehicleStateProvider const&);
    VehicleStateProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VehicleStateProvider() = default;

    // vIndex: 1
    virtual bool canAddPassenger(
        std::vector<struct StrictActorIDEntityContextPair> const& vehiclePassengers,
        struct RideableComponentData const&                       vehicleData,
        class RideableComponentHelpers::IRideableActor const&     vehicleActor,
        class RideableComponentHelpers::IRideableActor const&     passengerActor
    ) const;

    MCAPI static bool isPassenger(
        std::vector<struct StrictActorIDEntityContextPair> const& vehiclePassengers,
        struct ActorUniqueID const&                               passengerID
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool canAddPassenger$(
        std::vector<struct StrictActorIDEntityContextPair> const& vehiclePassengers,
        struct RideableComponentData const&                       vehicleData,
        class RideableComponentHelpers::IRideableActor const&     vehicleActor,
        class RideableComponentHelpers::IRideableActor const&     passengerActor
    ) const;

    // NOLINTEND
};

}; // namespace RideableComponentHelpers
