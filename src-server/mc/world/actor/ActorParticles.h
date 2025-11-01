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
MCNAPI uint calculateDustParticleNumberFromFall(float fallDistance);

MCNAPI void spawnBalloonPopParticles(uint particleCount, ::AABB aabb, ::SharedTypes::Legacy::PaletteColor color, ::ILevel& level, ::Random& random);

MCNAPI void spawnDeathParticles(::Vec3 position, ::Vec2 aabbDim, float heightOffset, ::ILevel& level);

MCNAPI void spawnParticlesInArea(::ILevel& level, uint particleCount, ::ParticleType type, ::Vec3 const& position, ::Vec2 const& aabbDim, ::Random& random);

MCNAPI void spawnPukeParticles(uint numLines, uint particlesPerLine, ::Vec3 position, ::Vec3 lookDirection, ::ILevel& level, ::Random& random);

MCNAPI void spawnTreasureHuntingParticles(uint particleCount, ::Vec3 position, ::Vec3 direction, ::Vec2 aabbDim, ::ILevel& level, ::Random& random);
// NOLINTEND

}
