#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
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
    // ?_scanSystem@DolphinBoostSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUActorDataFlagComponent@@UScanForDolphinTimerComponent@@@@V?$EntityModifier@V?$FlagComponent@UScanForDolphin@@@@@@@Z
    MCAPI static void _scanSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct ActorDataFlagComponent const,
            struct ScanForDolphinTimerComponent>                         view,
        class EntityModifier<class FlagComponent<struct ScanForDolphin>> modifier
    );

    // symbol:
    // ?_swimSpeedModifierSystem@DolphinBoostSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUActorDataFlagComponent@@USwimSpeedMultiplierComponent@@V?$Optional@V?$FlagComponent@UScanForDolphin@@@@@@V?$Optional@V?$FlagComponent@UIsNearDolphinsFlag@@@@@@@@@Z
    MCAPI static void _swimSpeedModifierSystem(class ViewT<
                                               class StrictEntityContext,
                                               struct Include<
                                                   class FlagComponent<struct PlayerComponentFlag>,
                                                   class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                               struct ActorDataFlagComponent const,
                                               struct SwimSpeedMultiplierComponent,
                                               class Optional<class FlagComponent<struct ScanForDolphin>>,
                                               class Optional<class FlagComponent<struct IsNearDolphinsFlag>>> view);

    // symbol:
    // ?_tickScan@DolphinBoostSystem@@SAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEAUScanForDolphinTimerComponent@@V?$EntityModifier@V?$FlagComponent@UScanForDolphin@@@@@@@Z
    MCAPI static void
    _tickScan(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct ScanForDolphinTimerComponent&, class EntityModifier<class FlagComponent<struct ScanForDolphin>>);

    // symbol:
    // ?_tickSwimSpeedModifier@DolphinBoostSystem@@SAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEAUSwimSpeedMultiplierComponent@@V?$Optional@V?$FlagComponent@UScanForDolphin@@@@@@V?$Optional@V?$FlagComponent@UIsNearDolphinsFlag@@@@@@@Z
    MCAPI static void
    _tickSwimSpeedModifier(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct SwimSpeedMultiplierComponent&, class Optional<class FlagComponent<struct ScanForDolphin>>, class Optional<class FlagComponent<struct IsNearDolphinsFlag>>);

    // symbol: ?createFindDolphinsSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem();

    // symbol: ?createScanSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createScanSystem();

    // symbol: ?createSwimSpeedModifierSystem@DolphinBoostSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem();

    // NOLINTEND
};
