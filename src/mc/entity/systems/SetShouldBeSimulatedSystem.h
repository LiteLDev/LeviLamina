#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct ShouldBeSimulatedComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace SetShouldBeSimulatedSystem {
// functions
// NOLINTBEGIN
MCNAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);

MCNAPI void setShouldBeSimulatedIfClientPredicted(
    ::StrictEntityContext const&                        entity,
    ::optional_ref<::VehicleInputIntentComponent const> vehicleInputIntent,
    ::EntityModifier<::ShouldBeSimulatedComponent>&     modifier
);
// NOLINTEND

} // namespace SetShouldBeSimulatedSystem
