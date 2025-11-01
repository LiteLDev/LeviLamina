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
struct EditorActorUnpausableComponent;
struct EditorWidgetDisplayEntityComponent;
struct FallingBlockFlagComponent;
struct PlayerComponent;
// clang-format on

struct EditorFilterPausedSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickAddEditorPaused(
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<
                ::EditorActorPausedComponent,
                ::EditorActorUnpausableComponent,
                ::PlayerComponent,
                ::FallingBlockFlagComponent,
                ::EditorWidgetDisplayEntityComponent>,
            ::Include<::ActorComponent const>>         view,
        ::EntityModifier<::EditorActorPausedComponent> entityModifier
    );
    // NOLINTEND
};
