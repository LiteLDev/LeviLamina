#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorMovementTickNeededComponent;
struct AttributesComponent;
struct MovementAttributesComponent;
// clang-format on

namespace UpdateAttributesSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickUpdateAttributesSystem(::entt::type_list<::Include<::ActorMovementTickNeededComponent>>, ::AttributesComponent const& attributes, ::MovementAttributesComponent& movementAttributes);
// NOLINTEND

}
