#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
struct EditorActorPauseTickNeededComponent;
struct EditorActorPausedComponent;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addPauseTickNeeded(
        ::StrictEntityContext& entity,
        ::ActorTickNeededComponent&,
        ::EntityModifier<::EditorActorPauseTickNeededComponent>& modifier
    );

    MCAPI static void _tickAddPauseTickNeeded(
        ::ViewT<::StrictEntityContext, ::Include<::EditorActorPausedComponent>, ::ActorTickNeededComponent> view,
        ::EntityModifier<::EditorActorPauseTickNeededComponent>                                             modifier
    );
    // NOLINTEND
};
