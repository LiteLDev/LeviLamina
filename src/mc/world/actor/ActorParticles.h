#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/PaletteColor.h"
#include "mc/world/actor/ParticleType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class ILevel;
class Random;
class Vec2;
class Vec3;
// clang-format on

namespace ActorParticles {
// functions
// NOLINTBEGIN
MCAPI uint calculateDustParticleNumberFromFall(float fallDistance);

MCAPI ::Vec3 getDustParticlePosition(::Vec3 const& position, ::AABB const& aabb);

MCAPI void
spawnBalloonPopParticles(uint particleCount, ::AABB aabb, ::PaletteColor color, ::ILevel& level, ::Random& random);

MCAPI void spawnDeathParticles(::Vec3 position, ::Vec2 aabbDim, float heightOffset, ::ILevel& level);

MCAPI void spawnDustParticlesFromFalling(
    uint           particleCount,
    ::Vec3         position,
    ::ILevel&      level,
    ::Block const& block,
    ::BlockPos     blockPos
);

MCAPI void spawnParticlesInArea(
    ::ILevel&      level,
    uint           particleCount,
    ::ParticleType type,
    ::Vec3 const&  position,
    ::Vec2 const&  aabbDim,
    ::Random&      random
);

MCAPI void spawnPukeParticles(
    uint      numLines,
    uint      particlesPerLine,
    ::Vec3    position,
    ::Vec3    lookDirection,
    ::ILevel& level,
    ::Random& random
);

MCAPI void spawnTreasureHuntingParticles(
    uint      particleCount,
    ::Vec3    position,
    ::Vec3    direction,
    ::Vec2    aabbDim,
    ::ILevel& level,
    ::Random& random
);
// NOLINTEND

} // namespace ActorParticles
