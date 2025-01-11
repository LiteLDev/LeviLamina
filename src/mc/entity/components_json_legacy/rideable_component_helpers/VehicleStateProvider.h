#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/rideable_component_helpers/IVehicleStateProvider.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct RideableComponentData;
struct StrictActorIDEntityContextPair;
namespace RideableComponentHelpers { class IRideableActor; }
// clang-format on

namespace RideableComponentHelpers {

class VehicleStateProvider : public ::RideableComponentHelpers::IVehicleStateProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canAddPassenger(
        ::std::vector<::StrictActorIDEntityContextPair> const& vehiclePassengers,
        ::RideableComponentData const&                         vehicleData,
        ::RideableComponentHelpers::IRideableActor const&      vehicleActor,
        ::RideableComponentHelpers::IRideableActor const&      passengerActor
    ) const /*override*/;

    // vIndex: 0
    virtual ~VehicleStateProvider() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isPassenger(
        ::std::vector<::StrictActorIDEntityContextPair> const& vehiclePassengers,
        ::ActorUniqueID const&                                 passengerID
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canAddPassenger(
        ::std::vector<::StrictActorIDEntityContextPair> const& vehiclePassengers,
        ::RideableComponentData const&                         vehicleData,
        ::RideableComponentHelpers::IRideableActor const&      vehicleActor,
        ::RideableComponentHelpers::IRideableActor const&      passengerActor
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RideableComponentHelpers
