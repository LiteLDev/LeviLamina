#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/world/components/FlagComponent.h"

namespace AutoStepSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void
doAutoStepSystemImpl(entt::type_list<struct Include<class FlagComponent<struct AutoStepRequestFlag>>>, struct MaxAutoStepComponent const&, struct MoveRequestComponent&, struct AABBShapeComponent&, struct SubBBsComponent&);

MCAPI class AABB getMaxCollisionVolume(class Vec3 const&, struct MaxAutoStepComponent const&, class AABB const&);
// NOLINTEND

}; // namespace AutoStepSystem
