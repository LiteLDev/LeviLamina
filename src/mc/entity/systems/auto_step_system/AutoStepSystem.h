#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class AABB;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct AutoStepRequestFlagComponent;
struct HasAutoSteppedComponent;
struct MaxAutoStepComponent;
struct MoveRequestComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace AutoStepSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doAutoStepSystemImpl(
    ::entt::type_list<::Include<::AutoStepRequestFlagComponent>> entity,
    ::StrictEntityContext const&                                 maxAutoStepComponent,
    ::MaxAutoStepComponent const&                                moveRequestComponent,
    ::MoveRequestComponent&                                      aabbShapeComponent,
    ::AABBShapeComponent&                                        subBBsComponent,
    ::SubBBsComponent&                                           mod,
    ::EntityModifier<::HasAutoSteppedComponent>
);

MCAPI ::AABB
getMaxCollisionVolume(::Vec3 const& preMoveSpeed, ::MaxAutoStepComponent const& step, ::AABB const& preMoveShape);
// NOLINTEND

} // namespace AutoStepSystem
