#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct HorizontalCollisionFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct PlayerInputModeComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

struct VRBobControlSystem {
public:
    // prevent constructor by default
    VRBobControlSystem& operator=(VRBobControlSystem const&);
    VRBobControlSystem(VRBobControlSystem const&);
    VRBobControlSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
