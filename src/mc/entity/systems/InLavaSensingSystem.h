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
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void doInLavaSensing(
        class StrictEntityContext const& entity,
        struct UpdateWaterStateRequestComponent const&,
        class EntityModifier<class FlagComponent<struct InLavaFlag>> mod
    );

    MCAPI static void
    singleTickSystem(class StrictEntityContext&, class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const>, class EntityModifier<class FlagComponent<struct InLavaFlag>>);

    MCAPI static void
        tickSystem(class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const>, class EntityModifier<class FlagComponent<struct InLavaFlag>>);

    // NOLINTEND
};
