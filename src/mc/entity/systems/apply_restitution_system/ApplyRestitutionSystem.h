#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct ApplyRestitutionComponent;
struct EntitySystemTickingMode;
struct PostGameEventRequestComponent;
// clang-format on

namespace ApplyRestitutionSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systems, ::EntitySystemTickingMode const& tickingMode, bool isClientSide);

MCAPI void requestBounceGameEvent(
    ::StrictEntityContext const&       entity,
    ::ApplyRestitutionComponent const& modifier,
    ::EntityModifier<::PostGameEventRequestComponent>
);
// NOLINTEND

} // namespace ApplyRestitutionSystem
