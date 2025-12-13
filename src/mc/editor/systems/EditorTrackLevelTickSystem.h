#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class LevelTickTrackingComponent;
class StrictEntityContext;
struct ActorComponent;
struct CurrentTickComponent;
struct TickingSystemWithInfo;
// clang-format on

struct EditorTrackLevelTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _trackAddedActors(
        ::EntityModifier<::LevelTickTrackingComponent> entityModifier,
        ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
        ::ViewT<::StrictEntityContext, ::Include<::ActorComponent>, ::Exclude<::LevelTickTrackingComponent>> view
    );

    MCNAPI_C static void _trackTickingActors(
        ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
        ::ViewT<::StrictEntityContext, ::Include<::ActorTickNeededComponent>, ::LevelTickTrackingComponent> view
    );

    MCNAPI_C static ::TickingSystemWithInfo createTrackTickingActors();
    // NOLINTEND
};
