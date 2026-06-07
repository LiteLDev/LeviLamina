#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
struct EditorActorPauseTickNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addPauseTickNeeded(
        ::StrictEntityContext&      entity,
        ::ActorTickNeededComponent& modifier,
        ::EntityModifier<::EditorActorPauseTickNeededComponent>&
    );

    MCAPI static ::TickingSystemWithInfo createAddPauseTickNeeded();

    MCAPI static ::TickingSystemWithInfo createRemoveActorTickNeeded();
    // NOLINTEND
};
