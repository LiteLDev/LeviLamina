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
    // vIndex: 0, symbol: __gen_??1VehicleStateProvider@RideableComponentHelpers@@UEAA@XZ
    virtual ~VehicleStateProvider() = default;

    // vIndex: 1, symbol:
    // ?canAddPassenger@VehicleStateProvider@RideableComponentHelpers@@UEBA_NAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBURideableComponentData@@AEBVIRideableActor@2@2@Z
    virtual bool
    canAddPassenger(std::vector<struct StrictActorIDEntityContextPair> const&, struct RideableComponentData const&, class RideableComponentHelpers::IRideableActor const&, class RideableComponentHelpers::IRideableActor const&)
        const;

    // symbol:
    // ?isPassenger@VehicleStateProvider@RideableComponentHelpers@@SA_NAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBUActorUniqueID@@@Z
    MCAPI static bool
    isPassenger(std::vector<struct StrictActorIDEntityContextPair> const&, struct ActorUniqueID const&);

    // NOLINTEND
};

}; // namespace RideableComponentHelpers
