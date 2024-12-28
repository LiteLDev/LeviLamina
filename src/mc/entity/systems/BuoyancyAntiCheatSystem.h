#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class ReplayStateComponent;
struct ActorMovementTickNeededComponent;
struct BuoyancyFloatRequestComponent;
struct ShouldBeSimulatedComponent;
// clang-format on

namespace BuoyancyAntiCheatSystem {
// functions
// NOLINTBEGIN
MCAPI void doTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ShouldBeSimulatedComponent>>,
    ::BuoyancyComponent const&                        buoyancyComponent,
    ::Optional<::BuoyancyFloatRequestComponent const> floatRequestComponent,
    ::ReplayStateComponent&                           replay
);
// NOLINTEND

} // namespace BuoyancyAntiCheatSystem
