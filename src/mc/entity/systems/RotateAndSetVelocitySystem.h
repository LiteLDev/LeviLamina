#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LocalMoveVelocityComponent;
struct MoveInputComponent;
struct PlayerInputModeComponent;
struct TickingSystemWithInfo;
struct VRMoveAdjustAngleComponent;
// clang-format on

struct RotateAndSetVelocitySystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doTick(
        ::MoveInputComponent const&         input,
        ::PlayerInputModeComponent const&   inputMode,
        ::VRMoveAdjustAngleComponent const& adjAngle,
        ::LocalMoveVelocityComponent&       localVelocity
    );
    // NOLINTEND
};
