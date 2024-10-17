#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ResetMoveDirectionJumpPendingSystem {
public:
    // prevent constructor by default
    ResetMoveDirectionJumpPendingSystem& operator=(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem(ResetMoveDirectionJumpPendingSystem const&);
    ResetMoveDirectionJumpPendingSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();

    MCAPI static void
    tickResetMoveDirectionJumpPendingSystem(class ViewT<
                                            class StrictEntityContext,
                                            struct Include<struct OnGroundFlagComponent>,
                                            struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>>,
                                            struct JumpPendingScaleComponent const,
                                            struct ActorDataFlagComponent const,
                                            struct ActorDataControllingSeatIndexComponent const,
                                            struct VehicleComponent const,
                                            struct MobTravelComponent> view);

    // NOLINTEND
};
