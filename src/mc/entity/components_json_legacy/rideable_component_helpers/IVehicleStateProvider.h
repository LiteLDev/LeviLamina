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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVehicleStateProvider() = default;

    virtual bool canAddPassenger(
        ::std::vector<::StrictActorIDEntityContextPair> const&,
        ::RideableComponentData const&,
        ::RideableComponentHelpers::IRideableActor const&,
        ::RideableComponentHelpers::IRideableActor const&
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
