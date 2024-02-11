#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace BuoyancySystem {
// NOLINTBEGIN
// symbol:
// ?checkAndAddFloatRequest@BuoyancySystem@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAVBuoyancyComponent@@AEAV?$EntityModifier@UBuoyancyFloatRequestComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
checkAndAddFloatRequest(class StrictEntityContext const&, struct StateVectorComponent const&, class BuoyancyComponent&, class EntityModifier<struct BuoyancyFloatRequestComponent>&, class IConstBlockSource const&);

// symbol: ?registerSystems@BuoyancySystem@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerSystems(class EntitySystems&, bool);
// NOLINTEND

}; // namespace BuoyancySystem
