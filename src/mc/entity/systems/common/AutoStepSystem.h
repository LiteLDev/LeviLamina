#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/world/components/FlagComponent.h"

namespace AutoStepSystem {
// NOLINTBEGIN
// symbol: ?createSystem@AutoStepSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doAutoStepSystemImpl@AutoStepSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UAutoStepRequestFlag@@@@@@@entt@@AEBUMaxAutoStepComponent@@AEAUMoveRequestComponent@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@@Z
MCAPI void
doAutoStepSystemImpl(entt::type_list<struct Include<class FlagComponent<struct AutoStepRequestFlag>>>, struct MaxAutoStepComponent const&, struct MoveRequestComponent&, struct AABBShapeComponent&, struct SubBBsComponent&);

// symbol: ?getMaxCollisionVolume@AutoStepSystem@@YA?AVAABB@@AEBVVec3@@AEBUMaxAutoStepComponent@@AEBV2@@Z
MCAPI class AABB getMaxCollisionVolume(class Vec3 const&, struct MaxAutoStepComponent const&, class AABB const&);
// NOLINTEND

}; // namespace AutoStepSystem
