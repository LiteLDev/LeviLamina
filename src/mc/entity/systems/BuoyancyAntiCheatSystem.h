#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace BuoyancyAntiCheatSystem {
// NOLINTBEGIN
MCAPI void doTick(
    entt::type_list<struct Include<
        class FlagComponent<struct ActorMovementTickNeededFlag>,
        class FlagComponent<struct ShouldBeSimulatedFlag>>>,
    class BuoyancyComponent const&                             buoyancyComponent,
    class Optional<struct BuoyancyFloatRequestComponent const> floatRequestComponent,
    class ReplayStateComponent&                                replay
);
// NOLINTEND

}; // namespace BuoyancyAntiCheatSystem
