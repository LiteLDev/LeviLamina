#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"

class PopulateGlobalPassengersToPositionListSystem {
public:
    // prevent constructor by default
    PopulateGlobalPassengersToPositionListSystem& operator=(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_populateList@PopulateGlobalPassengersToPositionListSystem@@SA_NV?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@U?$Exclude@UPassengerComponent@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UPositionPassengerRequestComponent@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUPassengerComponent@@@@AEAUPassengersToPositionComponent@@@Z
    MCAPI static bool _populateList(
        class ViewT<
            class StrictEntityContext,
            struct VehicleComponent const,
            struct Exclude<struct PassengerComponent>>,
        class ViewT<class StrictEntityContext, struct VehicleComponent const>,
        class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>,
        class ViewT<class StrictEntityContext, struct PassengerComponent const>,
        struct PassengersToPositionComponent& destination
    );

    // symbol:
    // ?_removeRequestsFromBrokenLinks@PopulateGlobalPassengersToPositionListSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UPositionPassengerRequestComponent@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUPassengerComponent@@@@V?$EntityModifier@UPositionPassengerRequestComponent@@@@@Z
    MCAPI static void
        _removeRequestsFromBrokenLinks(class ViewT<class StrictEntityContext, struct VehicleComponent const>, class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, struct PassengerComponent const>, class EntityModifier<struct PositionPassengerRequestComponent>);

    // symbol:
    // ?_tick@PopulateGlobalPassengersToPositionListSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@U?$Exclude@UPassengerComponent@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UPositionPassengerRequestComponent@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUPassengerComponent@@@@V?$OptionalGlobal@UPassengersToPositionComponent@@@@V?$EntityModifier@UPositionPassengerRequestComponent@@@@@Z
    MCAPI static void _tick(
        class ViewT<
            class StrictEntityContext,
            struct VehicleComponent const,
            struct Exclude<struct PassengerComponent>>,
        class ViewT<class StrictEntityContext, struct VehicleComponent const>,
        class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>,
        class ViewT<class StrictEntityContext, struct PassengerComponent const>,
        class OptionalGlobal<struct PassengersToPositionComponent>,
        class EntityModifier<struct PositionPassengerRequestComponent> modifier
    );

    // symbol: ?createSystem@PopulateGlobalPassengersToPositionListSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
