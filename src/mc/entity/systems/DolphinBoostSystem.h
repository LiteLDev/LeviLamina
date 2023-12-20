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
    // symbol:
    // ?_tickScan@DolphinBoostSystem@@SAXAEBVStrictEntityContext@@AEBUSynchedActorDataComponent@@AEAUScanForDolphinTimerComponent@@V?$EntityModifier@V?$FlagComponent@UScanForDolphin@@@@@@@Z
    MCAPI static void
    _tickScan(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct ScanForDolphinTimerComponent&, class EntityModifier<class FlagComponent<struct ScanForDolphin>>);

    // symbol:
    // ?_tickSwimSpeedModifier@DolphinBoostSystem@@SAXAEBVStrictEntityContext@@AEBUSynchedActorDataComponent@@AEAUSwimSpeedMultiplierComponent@@V?$Optional@V?$FlagComponent@UScanForDolphin@@@@@@V?$Optional@V?$FlagComponent@UIsNearDolphinsFlag@@@@@@@Z
    MCAPI static void
    _tickSwimSpeedModifier(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct SwimSpeedMultiplierComponent&, class Optional<class FlagComponent<struct ScanForDolphin>>, class Optional<class FlagComponent<struct IsNearDolphinsFlag>>);

    // symbol: ?createFindDolphinsSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem();

    // symbol: ?createScanSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createScanSystem();

    // symbol: ?createSwimSpeedModifierSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem();

    // NOLINTEND
};
