#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class NavigationComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CanStandOnSnowFlagComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct LavaTravelFlagComponent;
struct MobTravelComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class LavaMoveSystem {
public:
    // prevent constructor by default
    LavaMoveSystem& operator=(LavaMoveSystem const&);
    LavaMoveSystem(LavaMoveSystem const&);
    LavaMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createLavaMoveSystem();
    // NOLINTEND
};
