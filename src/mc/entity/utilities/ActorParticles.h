#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/enums/ParticleType.h"

namespace ActorParticles {
// NOLINTBEGIN
MCAPI uint calculateDustParticleNumberFromFall(float fallDistance);

MCAPI class Vec3 getDustParticlePosition(class Vec3 const& position, class AABB const& aabb);

MCAPI void spawnBalloonPopParticles(
    uint           particleCount,
    class AABB     aabb,
    ::PaletteColor color,
    class ILevel&  level,
    class Random&  random
);

MCAPI void spawnDeathParticles(class Vec3 position, class Vec2 aabbDim, float heightOffset, class ILevel& level);

MCAPI void spawnDustParticlesFromFalling(
    uint               particleCount,
    class Vec3         position,
    class ILevel&      level,
    class Block const& block,
    class BlockPos     blockPos
);

MCAPI void spawnParticlesInArea(
    class ILevel&     level,
    uint              particleCount,
    ::ParticleType    type,
    class Vec3 const& position,
    class Vec2 const& aabbDim,
    class Random&     random
);

MCAPI void spawnPukeParticles(uint, uint, class Vec3 position, class Vec3, class ILevel& level, class Random& random);

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
