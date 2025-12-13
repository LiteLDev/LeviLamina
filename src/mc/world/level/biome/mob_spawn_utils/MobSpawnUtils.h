#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/mob_spawn_utils/SurfaceDetectionType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorFactory;
class BlockPos;
class BlockSource;
class EntityContext;
class Level;
class Mob;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

namespace MobSpawnUtils {
// functions
// NOLINTBEGIN
MCNAPI void onMobSpawned(::BlockPos const& pos, ::Level& level, ::Mob& mob);

MCNAPI ::OwnerPtr<::EntityContext> spawnIfSummonable(
    ::ActorDefinitionIdentifier const& actorIdentifier,
    ::ActorDefinitionGroup&            actorDefinitions,
    ::ActorFactory&                    actorFactory,
    ::Vec3 const&                      position,
    ::Vec2 const&                      rotation
);

MCNAPI ::Mob* trySpawnMob(
    ::BlockSource&                           region,
    ::ActorDefinitionIdentifier const&       actorDefinition,
    ::BlockPos                               start,
    int                                      spawnAttempts,
    int                                      spawnRangeXZ,
    int                                      spawnRangeY,
    ::std::function<bool(::BlockPos)> const& isGoodSpawnPosition,
    ::MobSpawnUtils::SurfaceDetectionType    surfaceDetectionType
);
// NOLINTEND

} // namespace MobSpawnUtils
