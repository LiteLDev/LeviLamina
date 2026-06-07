#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ApplyRestitutionComponent;
struct BounceGravityCorrectionComponent;
struct MoveRequestComponent;
// clang-format on

namespace RequestGravityCorrectionSystem {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::StrictEntityContext const&                         context,
    ::ApplyRestitutionComponent const&                   applyRestitutionComponent,
    ::MoveRequestComponent const&                        moveRequestComponent,
    ::EntityModifier<::BounceGravityCorrectionComponent> modifier
);
// NOLINTEND

} // namespace RequestGravityCorrectionSystem
