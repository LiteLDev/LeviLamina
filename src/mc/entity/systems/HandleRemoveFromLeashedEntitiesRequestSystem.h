#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LeashedEntitiesComponent;
struct RemoveFromLeashedEntitiesRequestComponent;
// clang-format on

namespace HandleRemoveFromLeashedEntitiesRequestSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickEntity(
    ::StrictEntityContext const&                       context,
    ::RemoveFromLeashedEntitiesRequestComponent const& removeFromLeashedEntitiesRequestComponent,
    ::LeashedEntitiesComponent&                        leashedEntitiesComponent,
    ::EntityModifier<::LeashedEntitiesComponent>&      leashedEntitiesComponentModifier
);
// NOLINTEND

} // namespace HandleRemoveFromLeashedEntitiesRequestSystem
