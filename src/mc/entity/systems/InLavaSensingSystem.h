#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

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
        class StrictEntityContext const&                             entity,
        struct UpdateWaterStateRequestComponent const&               updateWaterStateRequestComponent,
        class EntityModifier<class FlagComponent<struct InLavaFlag>> mod
    );

    MCAPI static void singleTickSystem(
        class StrictEntityContext&                                                            entity,
        class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const> view,
        class EntityModifier<class FlagComponent<struct InLavaFlag>>                          mod
    );

    MCAPI static void tickSystem(
        class ViewT<class StrictEntityContext, struct UpdateWaterStateRequestComponent const> view,
        class EntityModifier<class FlagComponent<struct InLavaFlag>>                          mod
    );

    // NOLINTEND
};
