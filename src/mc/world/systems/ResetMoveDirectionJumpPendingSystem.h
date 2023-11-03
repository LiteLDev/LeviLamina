#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetMoveDirectionJumpPendingSystem {
public:
    // prevent constructor by default
    ResetMoveDirectionJumpPendingSystem& operator=(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createResetMoveDirectionJumpPendingSystem@ResetMoveDirectionJumpPendingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();

    // symbol:
    // ?tickResetMoveDirectionJumpPendingSystem@ResetMoveDirectionJumpPendingSystem@@SAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@@@$$CBUJumpPendingScaleComponent@@$$CBUSynchedActorDataComponent@@$$CBUVehicleComponent@@UMobTravelComponent@@@@@Z
    MCAPI static void
        tickResetMoveDirectionJumpPendingSystem(class ViewT<
                                                class StrictEntityContext,
                                                class EntityRegistryBase,
                                                struct Include<class FlagComponent<struct OnGroundFlag>>,
                                                struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>>,
                                                struct JumpPendingScaleComponent const,
                                                struct SynchedActorDataComponent const,
                                                struct VehicleComponent const,
                                                struct MobTravelComponent>);

    // NOLINTEND
};
