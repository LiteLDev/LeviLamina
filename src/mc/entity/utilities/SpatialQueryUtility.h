#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorUniqueID;
struct CollidableMobFlagComponent;
struct CollisionShapes;
struct FallingBlockFlagComponent;
// clang-format on

struct SpatialQueryUtility {
public:
    // prevent constructor by default
    SpatialQueryUtility& operator=(SpatialQueryUtility const&);
    SpatialQueryUtility(SpatialQueryUtility const&);
    SpatialQueryUtility();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool forEachBlockInAABB(
        ::IConstBlockSource const&                                      region,
        ::AABB const&                                                   aabb,
        float                                                           grow,
        ::std::function<void(::Block const&, ::BlockPos const&)> const& callback
    );

    MCAPI static void testForCollidableMobs(
        ::StrictEntityContext const& except,
        ::LocalSpatialEntityFetcher& fetcher,
        ::AABB const&                actorAABB,
        ::AABB const&                intersectTestBox,
        ::ViewT<::StrictEntityContext, ::Include<::CollidableMobFlagComponent>, ::AABBShapeComponent const> view,
        ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>> fallingBlockView,
        ::CollisionShapes&                                                     collisionShapes
    );

    MCAPI static ::StrictEntityContext tryFetchEntity(::LocalSpatialEntityFetcher& fetcher, ::ActorUniqueID const& id);
    // NOLINTEND
};
