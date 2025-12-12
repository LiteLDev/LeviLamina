#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntitySystems;
class IConstBlockSource;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct BaseGameVersionComponent;
struct BuoyancyFloatRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace BuoyancySystem {
// functions
// NOLINTBEGIN
MCNAPI void checkAndAddFloatRequest(
    ::StrictEntityContext const&                       entity,
    ::StateVectorComponent const&                      stateVectorComponent,
    ::BuoyancyComponent&                               buoyancyComponent,
    ::EntityModifier<::BuoyancyFloatRequestComponent>& mod,
    ::IConstBlockSource const&                         region
);

MCNAPI void registerSystems(::EntitySystems& systemRegistry);

MCNAPI void tickBuoyancyFloatSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::BuoyancyComponent,
        ::BuoyancyFloatRequestComponent,
        ::StateVectorComponent,
        ::ActorDataFlagComponent>                      view,
    ::OptionalGlobal<::BaseGameVersionComponent const> baseGameVersion
);
// NOLINTEND

} // namespace BuoyancySystem
