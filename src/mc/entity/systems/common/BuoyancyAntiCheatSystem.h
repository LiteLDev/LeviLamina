#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace BuoyancyAntiCheatSystem {
// NOLINTBEGIN
MCAPI void
doTick(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct ShouldBeSimulatedFlag>>>, class BuoyancyComponent const&, class Optional<struct BuoyancyFloatRequestComponent const>, class ReplayStateComponent&);
// NOLINTEND

}; // namespace BuoyancyAntiCheatSystem
