#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct PlayerPreMobTravelComponent;
struct StateVectorComponent;
// clang-format on

class PlayerMovementStatsEventSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickPlayerMovementStatsEventSystem(::ViewT<::StrictEntityContext, ::ActorOwnerComponent, ::PlayerPreMobTravelComponent const, ::StateVectorComponent const> view);
    // NOLINTEND

};
