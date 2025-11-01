#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class HitboxComponent;
class StrictEntityContext;
struct MoveRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace VanillaSystems::ActorMoveSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickUpdateHitboxSystem(::ViewT<::StrictEntityContext, ::Include<::MoveRequestComponent>, ::StateVectorComponent const, ::HitboxComponent> view);

MCNAPI void updateHitboxSystem(::StrictEntityContext const&, ::StateVectorComponent const& svc, ::HitboxComponent& hitbox);
// NOLINTEND

}
