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
MCAPI struct TickingSystemWithInfo createCollisionShapesCopySystem();

MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void fetchCollisionShapes(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MaxAutoStepComponent const&, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct MoveRequestComponent&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>> const&, class IConstBlockSource const&, class LocalSpatialEntityFetcher&, class GetCollisionShapeInterface const&, std::vector<struct BlockSourceVisitor::CollisionShape>&);

MCAPI std::vector<class AABB> getFetchBoxSubtraction(class AABB const&, class AABB const&);
// NOLINTEND

}; // namespace MoveCollisionSystem
