#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RideableComponentHelpers { class IRideableActor; }
// clang-format on

namespace RideableComponentHelpers {

class VehicleStateProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENTHELPERS_VEHICLESTATEPROVIDER
public:
    VehicleStateProvider& operator=(VehicleStateProvider const&) = delete;
    VehicleStateProvider(VehicleStateProvider const&)            = delete;
    VehicleStateProvider()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?canAddPassenger\@VehicleStateProvider\@RideableComponentHelpers\@\@UEBA_NAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBURideableComponentData\@\@AEBVIRideableActor\@2\@2\@Z
     */
    virtual bool
    canAddPassenger(std::vector<struct StrictActorIDEntityContextPair> const&, struct RideableComponentData const&, class RideableComponentHelpers::IRideableActor const&, class RideableComponentHelpers::IRideableActor const&)
        const;
    /**
     * @symbol
     * ?isPassenger\@VehicleStateProvider\@RideableComponentHelpers\@\@SA_NAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI static bool
    isPassenger(std::vector<struct StrictActorIDEntityContextPair> const&, struct ActorUniqueID const&);
};

}; // namespace RideableComponentHelpers
