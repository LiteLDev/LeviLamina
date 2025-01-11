#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorComponent;
struct EditorActorPausedComponent;
struct EditorWidgetDisplayEntityComponent;
struct FallingBlockFlagComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct EditorFilterPausedSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickAddEditorPaused(
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<
                ::EditorActorPausedComponent,
                ::PlayerComponent,
                ::FallingBlockFlagComponent,
                ::EditorWidgetDisplayEntityComponent>,
            ::Include<::ActorComponent const>>         view,
        ::EntityModifier<::EditorActorPausedComponent> entityModifier
    );

    MCAPI static ::TickingSystemWithInfo createAddPaused();

    MCAPI static ::TickingSystemWithInfo createRemovePaused();
    // NOLINTEND
};
