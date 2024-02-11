#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SetShouldBeSimulatedSystem {
// NOLINTBEGIN
// symbol: ?registerSystems@SetShouldBeSimulatedSystem@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerSystems(class EntitySystems&, bool);

// symbol:
// ?setShouldBeSimulatedIfClientPredicted@SetShouldBeSimulatedSystem@@YAXAEBVStrictEntityContext@@V?$optional_ref@$$CBUVehicleInputIntentComponent@@@@AEAV?$EntityModifier@V?$FlagComponent@UShouldBeSimulatedFlag@@@@@@@Z
MCAPI void
setShouldBeSimulatedIfClientPredicted(class StrictEntityContext const&, class optional_ref<struct VehicleInputIntentComponent const>, class EntityModifier<class FlagComponent<struct ShouldBeSimulatedFlag>>&);
// NOLINTEND

}; // namespace SetShouldBeSimulatedSystem
