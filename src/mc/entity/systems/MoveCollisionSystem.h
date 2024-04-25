#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

namespace MoveCollisionSystem {
// NOLINTBEGIN
// symbol: ?createCollisionShapesCopySystem@MoveCollisionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCollisionShapesCopySystem();

// symbol: ?createSystem@MoveCollisionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?fetchCollisionShapes@MoveCollisionSystem@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMaxAutoStepComponent@@AEBUActorDataFlagComponent@@V?$Optional@$$CBV?$FlagComponent@UCollidableMobNearFlag@@@@@@AEAUMoveRequestComponent@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UCollidableMobFlag@@@@@@$$CBUAABBShapeComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUAABBShapeComponent@@$$CBUActorDataFlagComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UFallingBlockFlag@@@@@@@@AEBVIConstBlockSource@@AEAVLocalSpatialEntityFetcher@@AEBVGetCollisionShapeInterface@@AEAV?$vector@UCollisionShape@BlockSourceVisitor@@V?$allocator@UCollisionShape@BlockSourceVisitor@@@std@@@std@@@Z
MCAPI void
fetchCollisionShapes(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MaxAutoStepComponent const&, struct ActorDataFlagComponent const&, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct MoveRequestComponent&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const> const&, class ViewT<class StrictEntityContext, struct AABBShapeComponent const, struct ActorDataFlagComponent const> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>> const&, class IConstBlockSource const&, class LocalSpatialEntityFetcher&, class GetCollisionShapeInterface const&, std::vector<struct BlockSourceVisitor::CollisionShape>&);

// symbol:
// ?getFetchBoxSubtraction@MoveCollisionSystem@@YA?AV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@0@Z
MCAPI std::vector<class AABB> getFetchBoxSubtraction(class AABB const&, class AABB const&);
// NOLINTEND

}; // namespace MoveCollisionSystem
