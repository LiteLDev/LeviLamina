#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
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
MCNAPI void tickEntity(::StrictEntityContext const& context, ::RemoveFromLeashedEntitiesRequestComponent const& removeFromLeashedEntitiesRequestComponent, ::LeashedEntitiesComponent& leashedEntitiesComponent, ::EntityModifier<::LeashedEntitiesComponent>& leashedEntitiesComponentModifier);

MCNAPI void tickView(::ViewT<::StrictEntityContext, ::RemoveFromLeashedEntitiesRequestComponent const, ::LeashedEntitiesComponent> view, ::EntityModifier<::LeashedEntitiesComponent> leashedEntitiesComponentModifier);
// NOLINTEND

}
