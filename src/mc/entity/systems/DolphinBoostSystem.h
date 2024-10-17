#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

class DolphinBoostSystem {
public:
    // prevent constructor by default
    DolphinBoostSystem& operator=(DolphinBoostSystem const&);
    DolphinBoostSystem(DolphinBoostSystem const&);
    DolphinBoostSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tickScan(
        class StrictEntityContext const&                                 context,
        struct ActorDataFlagComponent const&                             synchedActorDataComponent,
        struct ScanForDolphinTimerComponent&                             scanForDolphinTimerComponent,
        class EntityModifier<class FlagComponent<struct ScanForDolphin>> modifier
    );

    MCAPI static void _tickSwimSpeedModifier(
        class StrictEntityContext const&,
        struct ActorDataFlagComponent const&                           synchedActorDataComponent,
        struct SwimSpeedMultiplierComponent&                           swimSpeedMultiplierComponent,
        class Optional<class FlagComponent<struct ScanForDolphin>>     scanForDolphinFlagComponent,
        class Optional<class FlagComponent<struct IsNearDolphinsFlag>> isNearDolphinComponent
    );

    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem();

    MCAPI static struct TickingSystemWithInfo createScanSystem();

    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem();

    // NOLINTEND
};
