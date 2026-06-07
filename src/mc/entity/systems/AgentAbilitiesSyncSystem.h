#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class LevelComponent;
class StrictEntityContext;
struct AbilitiesDirtyComponent;
struct ActorTickedComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class AgentAbilitiesSyncSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createAgentAbilitiesSyncSystem();

    MCAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::ActorOwnerComponent,
            ::PlayerComponent,
            ::Include<::ActorTickedComponent const, ::AbilitiesDirtyComponent>> view,
        ::ViewT<::StrictEntityContext, ::LevelComponent>                        levelView,
        ::EntityModifier<::AbilitiesDirtyComponent>                             modifier
    );
    // NOLINTEND
};
