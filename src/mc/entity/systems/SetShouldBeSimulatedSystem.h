#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace SetShouldBeSimulatedSystem {
// NOLINTBEGIN
MCAPI void registerSystems(class EntitySystems& systemRegistry, bool isClientSide);

MCAPI void setShouldBeSimulatedIfClientPredicted(
    class StrictEntityContext const&                                         entity,
    class optional_ref<struct VehicleInputIntentComponent const>             vehicleInputIntent,
    class EntityModifier<class FlagComponent<struct ShouldBeSimulatedFlag>>& modifier
);
// NOLINTEND

}; // namespace SetShouldBeSimulatedSystem
