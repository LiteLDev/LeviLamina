#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace BuoyancySystem {
// NOLINTBEGIN
MCAPI void checkAndAddFloatRequest(
    class StrictEntityContext const&                            entity,
    struct StateVectorComponent const&                          stateVectorComponent,
    class BuoyancyComponent&                                    buoyancyComponent,
    class EntityModifier<struct BuoyancyFloatRequestComponent>& mod,
    class IConstBlockSource const&                              region
);

MCAPI void increaseBuoyancyTimerSystem(
    entt::type_list<struct Include<
        class FlagComponent<struct ActorMovementTickNeededFlag>,
        class FlagComponent<struct ShouldBeSimulatedFlag>>>,
    struct RandomReferenceComponent const&                                randomReferenceComponent,
    struct StateVectorComponent const&                                    stateVectorComponent,
    class BuoyancyComponent&                                              buoyancyComponent,
    class ViewT<class StrictEntityContext, struct RandomComponent> const& randomView
);

MCAPI void registerSystems(class EntitySystems& systemRegistry, bool isAntiCheatEnabled);
// NOLINTEND

}; // namespace BuoyancySystem
