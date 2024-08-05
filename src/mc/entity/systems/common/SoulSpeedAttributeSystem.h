#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SoulSpeedAttributeSystem {
public:
    // prevent constructor by default
    SoulSpeedAttributeSystem& operator=(SoulSpeedAttributeSystem const&);
    SoulSpeedAttributeSystem(SoulSpeedAttributeSystem const&);
    SoulSpeedAttributeSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tryProcessSoulSpeed(class StrictEntityContext&, class ActorOwnerComponent&);

    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<
                                     class FlagComponent<struct ActorMovementTickNeededFlag>,
                                     class FlagComponent<struct MobFlag>>,
                                 class ActorOwnerComponent> view);

    // NOLINTEND
};
