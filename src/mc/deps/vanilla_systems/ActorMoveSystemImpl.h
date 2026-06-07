#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HitboxComponent;
class StrictEntityContext;
struct StateVectorComponent;
// clang-format on

namespace VanillaSystems::ActorMoveSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void
updateHitboxSystem(::StrictEntityContext const& svc, ::StateVectorComponent const& hitbox, ::HitboxComponent&);
// NOLINTEND

} // namespace VanillaSystems::ActorMoveSystemImpl
