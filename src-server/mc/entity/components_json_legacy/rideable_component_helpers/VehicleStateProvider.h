#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/rideable_component_helpers/IVehicleStateProvider.h"

// auto generated forward declare list
// clang-format off
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
    virtual bool canAddPassenger(::std::vector<::StrictActorIDEntityContextPair> const& vehiclePassengers, ::RideableComponentData const& vehicleData, ::RideableComponentHelpers::IRideableActor const& vehicleActor, ::RideableComponentHelpers::IRideableActor const& passengerActor) const /*override*/;

    // vIndex: 0
    virtual ~VehicleStateProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canAddPassenger(::std::vector<::StrictActorIDEntityContextPair> const& vehiclePassengers, ::RideableComponentData const& vehicleData, ::RideableComponentHelpers::IRideableActor const& vehicleActor, ::RideableComponentHelpers::IRideableActor const& passengerActor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
