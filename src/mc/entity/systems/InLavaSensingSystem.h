#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class InLavaSensingSystem {
public:
    // prevent constructor by default
    InLavaSensingSystem& operator=(InLavaSensingSystem const&);
    InLavaSensingSystem(InLavaSensingSystem const&);
    InLavaSensingSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@InLavaSensingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?doInLavaSensing@InLavaSensingSystem@@SAXAEBVStrictEntityContext@@AEBUUpdateWaterStateRequestComponent@@V?$EntityModifier@V?$FlagComponent@UInLavaFlag@@@@@@@Z
    MCAPI static void doInLavaSensing(
        class StrictEntityContext const& entity,
        struct UpdateWaterStateRequestComponent const&,
        class EntityModifier<class FlagComponent<struct InLavaFlag>> mod
    );

    // symbol:
    // ?singleTickSystem@InLavaSensingSystem@@SAXAEAVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@$$CBUUpdateWaterStateRequestComponent@@@@V?$EntityModifier@V?$FlagComponent@UInLavaFlag@@@@@@@Z
    MCAPI static void
    singleTickSystem(class StrictEntityContext&, class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const>, class EntityModifier<class FlagComponent<struct InLavaFlag>>);

    // symbol:
    // ?tickSystem@InLavaSensingSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUUpdateWaterStateRequestComponent@@@@V?$EntityModifier@V?$FlagComponent@UInLavaFlag@@@@@@@Z
    MCAPI static void
        tickSystem(class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const>, class EntityModifier<class FlagComponent<struct InLavaFlag>>);

    // NOLINTEND
};
