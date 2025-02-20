#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/actor/PaletteColor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ILevel;
class Random;
class Vec2;
class Vec3;
// clang-format on

namespace ActorParticles {
// functions
// NOLINTBEGIN
MCAPI uint calculateDustParticleNumberFromFall(float fallDistance);

MCAPI void spawnBalloonPopParticles(
    uint                                aabb,
    ::AABB                              color,
    ::SharedTypes::Legacy::PaletteColor level,
    ::ILevel&                           random,
    ::Random&                           particleCount
);

MCAPI void spawnDeathParticles(::Vec3 position, ::Vec2 aabbDim, float heightOffset, ::ILevel& level);

MCAPI void spawnParticlesInArea(
    ::ILevel&      level,
    uint           particleCount,
    ::ParticleType type,
    ::Vec3 const&  position,
    ::Vec2 const&  aabbDim,
    ::Random&      random
);

MCAPI void spawnPukeParticles(
    uint      position,
    uint      lookDirection,
    ::Vec3    level,
    ::Vec3    random,
    ::ILevel& numLines,
    ::Random& particlesPerLine
);

MCAPI void spawnTreasureHuntingParticles(
    uint      position,
    ::Vec3    direction,
    ::Vec3    aabbDim,
    ::Vec2    level,
    ::ILevel& random,
    ::Random& particleCount
);
// NOLINTEND

} // namespace ActorParticles
