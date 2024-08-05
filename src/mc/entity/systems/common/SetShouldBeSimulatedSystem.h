#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SetShouldBeSimulatedSystem {
// NOLINTBEGIN
MCAPI void registerSystems(class EntitySystems&, bool);

MCAPI void
setShouldBeSimulatedIfClientPredicted(class StrictEntityContext const&, class optional_ref<struct VehicleInputIntentComponent const>, class EntityModifier<class FlagComponent<struct ShouldBeSimulatedFlag>>&);
// NOLINTEND

}; // namespace SetShouldBeSimulatedSystem
