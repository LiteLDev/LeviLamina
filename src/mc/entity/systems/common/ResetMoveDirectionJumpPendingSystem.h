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
    // ?tickResetMoveDirectionJumpPendingSystem@ResetMoveDirectionJumpPendingSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@@@$$CBUJumpPendingScaleComponent@@$$CBUActorDataFlagComponent@@$$CBUActorDataControllingSeatIndexComponent@@$$CBUVehicleComponent@@UMobTravelComponent@@@@@Z
    MCAPI static void
    tickResetMoveDirectionJumpPendingSystem(class ViewT<
                                            class StrictEntityContext,
                                            struct Include<class FlagComponent<struct OnGroundFlag>>,
                                            struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>>,
                                            struct JumpPendingScaleComponent const,
                                            struct ActorDataFlagComponent const,
                                            struct ActorDataControllingSeatIndexComponent const,
                                            struct VehicleComponent const,
                                            struct MobTravelComponent> view);

    // NOLINTEND
};
