#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct CanStandOnSnowFlagComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct MobFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class LadderResetFallDamageSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createLadderResetFallDamageSystem();
    // NOLINTEND
};
