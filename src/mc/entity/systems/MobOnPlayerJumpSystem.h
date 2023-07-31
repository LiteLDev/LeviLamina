#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MobOnPlayerJumpSystem {

public:
    // prevent constructor by default
    MobOnPlayerJumpSystem& operator=(MobOnPlayerJumpSystem const&) = delete;
    MobOnPlayerJumpSystem(MobOnPlayerJumpSystem const&)            = delete;
    MobOnPlayerJumpSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createClientSystem\@MobOnPlayerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientSystem();
    /**
     * @symbol ?getPlayerJumpPendingScale\@MobOnPlayerJumpSystem\@\@SAMH\@Z
     */
    MCAPI static float getPlayerJumpPendingScale(int);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickMobOnPlayerJumpSystem\@MobOnPlayerJumpSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUMobOnPlayerJumpRequestComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUSynchedActorDataComponent\@\@V?$Optional\@UHorseStandCounterComponent\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@UMobOnPlayerJumpRequestComponent\@\@\@\@_N\@Z
     */
    MCAPI static void _tickMobOnPlayerJumpSystem(
        class StrictEntityContext&,
        struct MobOnPlayerJumpRequestComponent const&,
        struct JumpPendingScaleComponent&,
        struct SynchedActorDataComponent&,
        class Optional<struct HorseStandCounterComponent>,
        class Optional<struct PassengerComponent const>,
        class EntityModifierT<
            class EntityRegistryBase,
            class StrictEntityContext,
            class FlagComponent<struct MobAllowStandSlidingFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>,
            class FlagComponent<struct StopRidingRequestFlag>,
            struct MobOnPlayerJumpRequestComponent>&,
        bool
    );
    /**
     * @symbol
     * ?tickMobOnPlayerJumpClientSystem\@MobOnPlayerJumpSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBUMobOnPlayerJumpRequestComponent\@\@UJumpPendingScaleComponent\@\@USynchedActorDataComponent\@\@V?$Optional\@UHorseStandCounterComponent\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@UMobOnPlayerJumpRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void tickMobOnPlayerJumpClientSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct MobOnPlayerJumpRequestComponent const, struct JumpPendingScaleComponent, struct SynchedActorDataComponent, class Optional<struct HorseStandCounterComponent>, class Optional<struct PassengerComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, struct MobOnPlayerJumpRequestComponent>);
    // NOLINTEND
};
