#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RideableComponentData;
struct StrictActorIDEntityContextPair;
namespace RideableComponentHelpers { class IRideableActor; }
// clang-format on

namespace RideableComponentHelpers {

class IVehicleStateProvider {
public:
    // prevent constructor by default
    IVehicleStateProvider& operator=(IVehicleStateProvider const&);
    IVehicleStateProvider(IVehicleStateProvider const&);
    IVehicleStateProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IVehicleStateProvider() = default;

    // vIndex: 1
    virtual bool
    canAddPassenger(::std::vector<::StrictActorIDEntityContextPair> const&, ::RideableComponentData const&, ::RideableComponentHelpers::IRideableActor const&, ::RideableComponentHelpers::IRideableActor const&)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
