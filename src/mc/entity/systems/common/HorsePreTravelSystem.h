#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class HorsePreTravelSystem {
public:
    // prevent constructor by default
    HorsePreTravelSystem& operator=(HorsePreTravelSystem const&);
    HorsePreTravelSystem(HorsePreTravelSystem const&);
    HorsePreTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createHorsePreTravelSystem@HorsePreTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();

    // symbol:
    // ?tickHorsePreTravelSystem@HorsePreTravelSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@V?$Optional@UVehicleComponent@@@@$$CBUActorDataFlagComponent@@UAirSpeedComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$ViewT@VStrictEntityContext@@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$EntityModifier@V?$FlagComponent@UWasOnGroundPreTravelFlag@@@@@@@Z
    MCAPI static void
        tickHorsePreTravelSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct HorseFlag>>, class Optional<struct VehicleComponent>, struct ActorDataFlagComponent const, struct AirSpeedComponent>, class ViewT<class StrictEntityContext, class FlagComponent<struct MobFlag> const>, class ViewT<class StrictEntityContext, class FlagComponent<struct OnGroundFlag> const>, class EntityModifier<class FlagComponent<struct WasOnGroundPreTravelFlag>>);

    // NOLINTEND
};
