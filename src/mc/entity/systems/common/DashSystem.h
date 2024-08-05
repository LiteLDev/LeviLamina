#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class DashSystem {
public:
    // prevent constructor by default
    DashSystem& operator=(DashSystem const&);
    DashSystem(DashSystem const&);
    DashSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickDashSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorTickedFlag>>,
            class ActorOwnerComponent,
            struct DashCooldownTimerComponent>                  view,
        class EntityModifier<struct DashCooldownTimerComponent> modifier
    );

    // NOLINTEND
};
