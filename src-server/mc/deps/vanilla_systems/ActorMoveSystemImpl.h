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
MCNAPI void
updateHitboxSystem(::StrictEntityContext const&, ::StateVectorComponent const& svc, ::HitboxComponent& hitbox);
// NOLINTEND

} // namespace VanillaSystems::ActorMoveSystemImpl
