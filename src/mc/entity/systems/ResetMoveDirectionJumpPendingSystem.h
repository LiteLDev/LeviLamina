#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct JumpPendingScaleComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobTravelComponent;
struct OnGroundFlagComponent;
struct VehicleComponent;
// clang-format on

class ResetMoveDirectionJumpPendingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickResetMoveDirectionJumpPendingSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::OnGroundFlagComponent>,
            ::Exclude<::MobAllowStandSlidingFlagComponent>,
            ::JumpPendingScaleComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataControllingSeatIndexComponent const,
            ::VehicleComponent const,
            ::MobTravelComponent> view
    );
    // NOLINTEND
};
