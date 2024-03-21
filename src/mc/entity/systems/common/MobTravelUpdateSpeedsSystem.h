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
    // ?tickMobTravelUpdateSpeedsSystem@MobTravelUpdateSpeedsSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@UMobTravelComponent@@@@$$CBUActorDataFlagComponent@@$$CBUActorDataControllingSeatIndexComponent@@$$CBUVehicleComponent@@UAirSpeedComponent@@$$CBUMovementAttributesComponent@@V?$Optional@$$CBV?$FlagComponent@UCanVehicleSprintFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUMovementAttributesComponent@@$$CBUMovementSpeedComponent@@@@V?$ViewT@VStrictEntityContext@@UMovementSpeedComponent@@ULocalMoveVelocityComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUActorDataFlagComponent@@@@@Z
    MCAPI static void tickMobTravelUpdateSpeedsSystem(class ViewT<class StrictEntityContext, struct Include<struct MobTravelComponent>, struct ActorDataFlagComponent const, struct ActorDataControllingSeatIndexComponent const, struct VehicleComponent const, struct AirSpeedComponent, struct MovementAttributesComponent const, class Optional<class FlagComponent<struct CanVehicleSprintFlag> const>>, class ViewT<class StrictEntityContext, struct MovementAttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const>);

    // NOLINTEND
};
