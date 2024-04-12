#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/enums/ParticleType.h"

namespace ActorParticles {
// NOLINTBEGIN
// symbol: ?calculateDustParticleNumberFromFall@ActorParticles@@YAIM@Z
MCAPI uint calculateDustParticleNumberFromFall(float fallDistance);

// symbol: ?getDustParticlePosition@ActorParticles@@YA?AVVec3@@AEBV2@AEBVAABB@@@Z
MCAPI class Vec3 getDustParticlePosition(class Vec3 const& position, class AABB const& aabb);

// symbol: ?spawnBalloonPopParticles@ActorParticles@@YAXIVAABB@@W4PaletteColor@@AEAVILevel@@AEAVRandom@@@Z
MCAPI void spawnBalloonPopParticles(
    uint           particleCount,
    class AABB     aabb,
    ::PaletteColor color,
    class ILevel&  level,
    class Random&  random
);

// symbol: ?spawnDeathParticles@ActorParticles@@YAXVVec3@@VVec2@@MAEAVILevel@@@Z
MCAPI void spawnDeathParticles(class Vec3 position, class Vec2 aabbDim, float heightOffset, class ILevel& level);

// symbol: ?spawnDustParticlesFromFalling@ActorParticles@@YAXIVVec3@@AEAVILevel@@AEBVBlock@@VBlockPos@@@Z
MCAPI void spawnDustParticlesFromFalling(
    uint               particleCount,
    class Vec3         position,
    class ILevel&      level,
    class Block const& block,
    class BlockPos     blockPos
);

// symbol: ?spawnParticlesInArea@ActorParticles@@YAXAEAVILevel@@IW4ParticleType@@AEBVVec3@@AEBVVec2@@AEAVRandom@@@Z
MCAPI void spawnParticlesInArea(
    class ILevel&     level,
    uint              particleCount,
    ::ParticleType    type,
    class Vec3 const& position,
    class Vec2 const& aabbDim,
    class Random&     random
);

// symbol: ?spawnPukeParticles@ActorParticles@@YAXIIVVec3@@0AEAVILevel@@AEAVRandom@@@Z
MCAPI void spawnPukeParticles(uint, uint, class Vec3 position, class Vec3, class ILevel& level, class Random& random);

// symbol: ?spawnTreasureHuntingParticles@ActorParticles@@YAXIVVec3@@0VVec2@@AEAVILevel@@AEAVRandom@@@Z
MCAPI void spawnTreasureHuntingParticles(
    uint          particleCount,
    class Vec3    position,
    class Vec3    direction,
    class Vec2    aabbDim,
    class ILevel& level,
    class Random& random
);
// NOLINTEND

}; // namespace ActorParticles
