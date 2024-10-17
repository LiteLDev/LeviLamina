#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/mob_spawn_utils/SurfaceDetectionType.h"

namespace MobSpawnUtils {
// NOLINTBEGIN
MCAPI class OwnerPtr<class EntityContext> spawnIfSummonable(
    struct ActorDefinitionIdentifier const& actorIdentifier,
    class ActorDefinitionGroup&             actorDefinitions,
    class ActorFactory&                     actorFactory,
    class Vec3 const&                       position,
    class Vec2 const&                       rotation
);

MCAPI class Mob* trySpawnMob(
    class BlockSource&                         region,
    struct ActorDefinitionIdentifier const&    actorDefinition,
    class BlockPos                             start,
    int                                        spawnAttempts,
    int                                        spawnRangeXZ,
    int                                        spawnRangeY,
    std::function<bool(class BlockPos)> const& isGoodSpawnPosition,
    ::MobSpawnUtils::SurfaceDetectionType      surfaceDetectionType
);
// NOLINTEND

}; // namespace MobSpawnUtils
