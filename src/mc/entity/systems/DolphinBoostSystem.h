#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class DolphinBoostSystem {
public:
    // prevent constructor by default
    DolphinBoostSystem& operator=(DolphinBoostSystem const&);
    DolphinBoostSystem(DolphinBoostSystem const&);
    DolphinBoostSystem();

public:
    // NOLINTBEGIN
    MCAPI static void
    _tickScan(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct ScanForDolphinTimerComponent&, class EntityModifier<class FlagComponent<struct ScanForDolphin>>);

    MCAPI static void
    _tickSwimSpeedModifier(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct SwimSpeedMultiplierComponent&, class Optional<class FlagComponent<struct ScanForDolphin>>, class Optional<class FlagComponent<struct IsNearDolphinsFlag>>);

    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem();

    MCAPI static struct TickingSystemWithInfo createScanSystem();

    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem();

    // NOLINTEND
};
