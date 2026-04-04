#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct ApplyRestitutionComponent;
struct EntitySystemTickingMode;
struct StateVectorComponent;
// clang-format on

namespace ApplyRestitutionSystem {
// functions
// NOLINTBEGIN
MCAPI void registerSystems(::EntitySystems& systems, ::EntitySystemTickingMode const& tickingMode);

MCAPI void tick(::ViewT<::StrictEntityContext, ::ApplyRestitutionComponent const, ::StateVectorComponent> view);

MCAPI void
tickSystem(::ApplyRestitutionComponent const& applyRestitutionComponent, ::StateVectorComponent& stateVectorComponent);
// NOLINTEND

} // namespace ApplyRestitutionSystem
