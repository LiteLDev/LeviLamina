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
struct PlayerComponent;
struct PlayerPositionModeComponent;
// clang-format on

class TeleportPositionModeEventSystem {
public:
    // TeleportPositionModeEventSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
        ::ActorOwnerComponent,
        ::PlayerPositionModeComponent const>;
};
