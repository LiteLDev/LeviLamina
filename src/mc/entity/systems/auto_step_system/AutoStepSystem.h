#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace AutoStepSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doAutoStepSystemImpl(
    entt::type_list<struct Include<class FlagComponent<struct AutoStepRequestFlag>>>,
    struct MaxAutoStepComponent const& maxAutoStepComponent,
    struct MoveRequestComponent&       moveRequestComponent,
    struct AABBShapeComponent&         aabbShapeComponent,
    struct SubBBsComponent&            subBBsComponent
);

MCAPI class AABB getMaxCollisionVolume(
    class Vec3 const&                  preMoveSpeed,
    struct MaxAutoStepComponent const& step,
    class AABB const&                  preMoveShape
);
// NOLINTEND

}; // namespace AutoStepSystem
