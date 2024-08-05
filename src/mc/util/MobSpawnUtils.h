#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/util/SurfaceDetectionType.h"

namespace MobSpawnUtils {
// NOLINTBEGIN
MCAPI class OwnerPtr<class EntityContext> spawnIfSummonable(
    struct ActorDefinitionIdentifier const& actorIdentifier,
    class ActorDefinitionGroup&,
    class ActorFactory& actorFactory,
    class Vec3 const&   position,
    class Vec2 const&   rotation
);

MCAPI class Mob* trySpawnMob(
    class BlockSource& region,
    struct ActorDefinitionIdentifier const&,
    class BlockPos start,
    int,
    int,
    int,
    std::function<bool(class BlockPos)> const&,
    ::MobSpawnUtils::SurfaceDetectionType
);
// NOLINTEND

}; // namespace MobSpawnUtils
