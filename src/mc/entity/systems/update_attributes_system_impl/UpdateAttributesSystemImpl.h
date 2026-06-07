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
struct InterpolateMovementNeededComponent;
struct MovementAttributesComponent;
// clang-format on

namespace UpdateAttributesSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     attributes,
    ::AttributesComponent&                                           request,
    ::AttributeRequestComponent const&                               modifier,
    ::EntityModifier<::AttributeRequestComponent>
);

MCAPI void tickUpdateAttributesSystem(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent>> attributes,
    ::AttributesComponent const&                                       movementAttributes,
    ::MovementAttributesComponent&
);
// NOLINTEND

} // namespace UpdateAttributesSystemImpl
