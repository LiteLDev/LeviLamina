#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SkeletonPassengerRotationSystemImpl {

public:
    // prevent constructor by default
    SkeletonPassengerRotationSystemImpl& operator=(SkeletonPassengerRotationSystemImpl const&) = delete;
    SkeletonPassengerRotationSystemImpl(SkeletonPassengerRotationSystemImpl const&)            = delete;
    SkeletonPassengerRotationSystemImpl()                                                      = delete;

    // private:
    /**
     * @symbol
     * ?_tickSkeletonView\@SkeletonPassengerRotationSystemImpl\@\@CAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBV?$FlagComponent\@USkeletonFlag\@\@\@\@AEAUMobBodyRotationComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUMobBodyRotationComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _tickSkeletonView(class StrictEntityContext&, struct PassengerComponent const&, class FlagComponent<struct SkeletonFlag> const&, struct MobBodyRotationComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct MobBodyRotationComponent const>); // NOLINT

private:
};
