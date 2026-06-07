#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class AABB;
class GetCollisionShapeInterface;
class IConstBlockSource;
class LocalSpatialEntityFetcher;
class ReplayStateComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorMovementTickNeededComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct FallingBlockFlagComponent;
struct MaxAutoStepComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

namespace MoveCollisionSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCollisionShapesCopySystem();

MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doComponentCopySystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> stateVector,
    ::StateVectorComponent const&                                    moveRequest,
    ::MoveRequestComponent const&                                    replay,
    ::ReplayStateComponent&
);

MCAPI void fetchCollisionShapes(
    ::StrictEntityContext const&                       entity,
    ::AABBShapeComponent const&                        aabb,
    ::MaxAutoStepComponent const&                      autoStep,
    ::Optional<::CollidableMobNearFlagComponent const> collidableMobNear,
    ::MoveRequestComponent&                            request,
    ::ViewT<::StrictEntityContext, ::Include<::CollidableMobFlagComponent>, ::AABBShapeComponent const> const&
                                                                                  collidableMobs,
    ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>> const& fallingBlocks,
    ::IConstBlockSource const&                                                    region,
    ::LocalSpatialEntityFetcher&                                                  fetcher,
    ::GetCollisionShapeInterface const&                                           collisionShape,
    ::std::vector<::BlockSourceVisitor::CollisionShape>&                          tempCollisionShapes,
    ::std::vector<::BlockSourceVisitor::CollisionShape>&                          scratchCollisionShapes,
    ::std::vector<::AABB>&                                                        tempShapes
);

MCAPI ::std::vector<::AABB> getFetchBoxSubtraction(::AABB const& newBox, ::AABB const& oldBox);
// NOLINTEND

} // namespace MoveCollisionSystem
