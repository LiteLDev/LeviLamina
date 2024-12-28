#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
struct AABBShapeComponent;
struct AutoStepRequestFlagComponent;
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
    ::entt::type_list<::Include<::AutoStepRequestFlagComponent>>,
    ::MaxAutoStepComponent const& maxAutoStepComponent,
    ::MoveRequestComponent&       moveRequestComponent,
    ::AABBShapeComponent&         aabbShapeComponent,
    ::SubBBsComponent&            subBBsComponent
);

MCAPI ::AABB
getMaxCollisionVolume(::Vec3 const& preMoveSpeed, ::MaxAutoStepComponent const& step, ::AABB const& preMoveShape);
// NOLINTEND

} // namespace AutoStepSystem
