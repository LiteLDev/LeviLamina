#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorComponent;
struct ActorRemovedFlagComponent;
struct HangingActorFlagComponent;
struct MoveRequestComponent;
namespace VanillaSystems { struct ActorAdapterComponent; }
// clang-format on

namespace HangingActorMoveSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doActorMoveSystem(
    ::StrictEntityContext const&             entity,
    ::MoveRequestComponent&                  moveRequestComponent,
    ::VanillaSystems::ActorAdapterComponent* adapter
);

MCNAPI void singleTickActorMoveSystem(
    ::StrictEntityContext& entity,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::HangingActorFlagComponent, ::ActorComponent>,
        ::Exclude<::ActorRemovedFlagComponent>,
        ::MoveRequestComponent>                               view,
    ::OptionalGlobal<::VanillaSystems::ActorAdapterComponent> adapterComponent
);

MCNAPI void tickActorMoveSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::HangingActorFlagComponent, ::ActorComponent>,
        ::Exclude<::ActorRemovedFlagComponent>,
        ::MoveRequestComponent>                               view,
    ::OptionalGlobal<::VanillaSystems::ActorAdapterComponent> adapterComponent
);
// NOLINTEND

} // namespace HangingActorMoveSystemImpl
