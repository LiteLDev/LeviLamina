#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRemovedFlagComponent;
struct ActorTickedComponent;
struct MobFlagComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobCounterSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void getMobCount(::ViewT<::StrictEntityContext, ::Include<::ActorTickedComponent, ::MobFlagComponent>, ::Exclude<::ActorRemovedFlagComponent, ::PlayerComponent>> view);
// NOLINTEND

}
