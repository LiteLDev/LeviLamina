#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct AddToLeashedEntitiesRequestComponent;
struct LeashedEntitiesComponent;
// clang-format on

namespace HandleAddToLeashedEntitiesRequestSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickEntity(
    ::StrictEntityContext const&                              context,
    ::ActorOwnerComponent const&                              actorOwnerComponent,
    ::AddToLeashedEntitiesRequestComponent const&             addToLeashedEntitiesRequestComponent,
    ::EntityModifier<::LeashedEntitiesComponent>&             leashedEntitiesComponentModifier,
    ::EntityModifier<::AddToLeashedEntitiesRequestComponent>& addToLeashedEntitiesRequestComponentModifier
);

MCNAPI void tickView(
    ::ViewT<::StrictEntityContext, ::ActorOwnerComponent const, ::AddToLeashedEntitiesRequestComponent const> view,
    ::EntityModifier<::LeashedEntitiesComponent>             leashedEntitiesComponentModifier,
    ::EntityModifier<::AddToLeashedEntitiesRequestComponent> addToLeashedEntitiesRequestComponentModifier
);
// NOLINTEND

} // namespace HandleAddToLeashedEntitiesRequestSystem
