#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntitySystems;
class IConstBlockSource;
class StrictEntityContext;
struct BuoyancyFloatRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace BuoyancySystem {
// functions
// NOLINTBEGIN
MCAPI void checkAndAddFloatRequest(
    ::StrictEntityContext const&                       entity,
    ::StateVectorComponent const&                      stateVectorComponent,
    ::BuoyancyComponent&                               buoyancyComponent,
    ::EntityModifier<::BuoyancyFloatRequestComponent>& mod,
    ::IConstBlockSource const&                         region
);

MCAPI void registerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace BuoyancySystem
