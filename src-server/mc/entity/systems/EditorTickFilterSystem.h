#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
struct EditorActorPauseTickNeededComponent;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addPauseTickNeeded(
        ::StrictEntityContext& entity,
        ::ActorTickNeededComponent&,
        ::EntityModifier<::EditorActorPauseTickNeededComponent>& modifier
    );
    // NOLINTEND
};
