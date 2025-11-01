#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
// clang-format on

struct PassengerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickMob(::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PassengerComponent>, ::FallDistanceComponent> view);

    MCNAPI static void tickPlayer(::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::ActorMovementTickNeededComponent, ::PassengerComponent>, ::ActorOwnerComponent> view);
    // NOLINTEND

};
