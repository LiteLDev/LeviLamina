#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct AttributeRequestComponent;
struct AttributesComponent;
struct MovementAttributesComponent;
// clang-format on

namespace UpdateAttributesSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                  entity,
    ::AttributesComponent&                        attributes,
    ::AttributeRequestComponent const&            request,
    ::EntityModifier<::AttributeRequestComponent> modifier
);

MCNAPI void tickUpdateAttributesSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::AttributesComponent const&   attributes,
    ::MovementAttributesComponent& movementAttributes
);
// NOLINTEND

} // namespace UpdateAttributesSystemImpl
