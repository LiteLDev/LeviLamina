#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class DolphinBoostSystem {

public:
    // prevent constructor by default
    DolphinBoostSystem& operator=(DolphinBoostSystem const&) = delete;
    DolphinBoostSystem(DolphinBoostSystem const&)            = delete;
    DolphinBoostSystem()                                     = delete;

public:
    /**
     * @symbol
     * ?_tickScan\@DolphinBoostSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEAUScanForDolphinTimerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UScanForDolphin\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _tickScan(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct ScanForDolphinTimerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ScanForDolphin>>); // NOLINT
    /**
     * @symbol
     * ?_tickSwimSpeedModifier\@DolphinBoostSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEAUSwimSpeedMultiplierComponent\@\@V?$Optional\@V?$FlagComponent\@UScanForDolphin\@\@\@\@\@\@V?$Optional\@V?$FlagComponent\@UIsNearDolphinsFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _tickSwimSpeedModifier(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct SwimSpeedMultiplierComponent&, class Optional<class FlagComponent<struct ScanForDolphin>>, class Optional<class FlagComponent<struct IsNearDolphinsFlag>>); // NOLINT
    /**
     * @symbol ?createFindDolphinsSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFindDolphinsSystem(); // NOLINT
    /**
     * @symbol ?createScanSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createScanSystem(); // NOLINT
    /**
     * @symbol ?createSwimSpeedModifierSystem\@DolphinBoostSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSwimSpeedModifierSystem(); // NOLINT
};
