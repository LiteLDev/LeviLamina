#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelUpdateSpeedsSystem {
public:
    // prevent constructor by default
    MobTravelUpdateSpeedsSystem& operator=(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createMobTravelUpdateSpeedsSystem@MobTravelUpdateSpeedsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();

    // symbol:
    // ?tickMobTravelUpdateSpeedsSystem@MobTravelUpdateSpeedsSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UMobTravelComponent@@@@$$CBUSynchedActorDataComponent@@$$CBUVehicleComponent@@UFlySpeedComponent@@$$CBUAttributesComponent@@V?$Optional@$$CBV?$FlagComponent@UCanVehicleSprintFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUAttributesComponent@@$$CBUMovementSpeedComponent@@@@V?$ViewT@VStrictEntityContext@@UMovementSpeedComponent@@ULocalMoveVelocityComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@@@@Z
    MCAPI static void
        tickMobTravelUpdateSpeedsSystem(class ViewT<class StrictEntityContext, struct Include<struct MobTravelComponent>, struct SynchedActorDataComponent const, struct VehicleComponent const, struct FlySpeedComponent, struct AttributesComponent const, class Optional<class FlagComponent<struct CanVehicleSprintFlag> const>>, class ViewT<class StrictEntityContext, struct AttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, struct SynchedActorDataComponent const>);

    // NOLINTEND
};
