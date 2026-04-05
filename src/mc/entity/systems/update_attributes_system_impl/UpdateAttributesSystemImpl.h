#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AttributeRequestComponent;
struct AttributesComponent;
struct InterpolateMovementNeededComponent;
struct MovementAttributesComponent;
// clang-format on

namespace UpdateAttributesSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickProcessRequests(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent>>,
    ::StrictEntityContext const&                  entity,
    ::AttributesComponent&                        attributes,
    ::AttributeRequestComponent const&            request,
    ::EntityModifier<::AttributeRequestComponent> modifier
);

MCAPI void tickUpdateAttributesSystem(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent>>,
    ::AttributesComponent const&   attributes,
    ::MovementAttributesComponent& movementAttributes
);
// NOLINTEND

} // namespace UpdateAttributesSystemImpl
