#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct AutoStepRequestFlagComponent;
struct HasAutoSteppedComponent;
struct MaxAutoStepComponent;
struct MoveRequestComponent;
struct SubBBsComponent;
// clang-format on

namespace AutoStepSystem {
// functions
// NOLINTBEGIN
MCNAPI void doAutoStepSystemImpl(::entt::type_list<::Include<::AutoStepRequestFlagComponent>>, ::StrictEntityContext const& entity, ::MaxAutoStepComponent const& maxAutoStepComponent, ::MoveRequestComponent& moveRequestComponent, ::AABBShapeComponent& aabbShapeComponent, ::SubBBsComponent& subBBsComponent, ::EntityModifier<::HasAutoSteppedComponent> mod);
// NOLINTEND

}
