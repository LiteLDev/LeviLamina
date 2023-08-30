#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/enums/ParticleType.h"

namespace ActorParticles {
// NOLINTBEGIN
/**
 * @symbol ?calculateDustParticleNumberFromFall\@ActorParticles\@\@YAIM\@Z
 */
MCAPI uint32_t calculateDustParticleNumberFromFall(float);
/**
 * @symbol ?getDustParticlePosition\@ActorParticles\@\@YA?AVVec3\@\@AEBV2\@AEBVAABB\@\@\@Z
 */
MCAPI class Vec3 getDustParticlePosition(class Vec3 const&, class AABB const&);
/**
 * @symbol ?spawnBalloonPopParticles\@ActorParticles\@\@YAXIVAABB\@\@W4PaletteColor\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void spawnBalloonPopParticles(uint32_t, class AABB, enum class PaletteColor, class ILevel&, class Random&);
/**
 * @symbol ?spawnDeathParticles\@ActorParticles\@\@YAXVVec3\@\@VVec2\@\@MAEAVILevel\@\@\@Z
 */
MCAPI void spawnDeathParticles(class Vec3, class Vec2, float, class ILevel&);
/**
 * @symbol ?spawnDustParticlesFromFalling\@ActorParticles\@\@YAXIVVec3\@\@AEAVILevel\@\@AEBVBlock\@\@VBlockPos\@\@\@Z
 */
MCAPI void spawnDustParticlesFromFalling(uint32_t, class Vec3, class ILevel&, class Block const&, class BlockPos);
/**
 * @symbol
 * ?spawnParticlesInArea\@ActorParticles\@\@YAXAEAVILevel\@\@IW4ParticleType\@\@AEBVVec3\@\@AEBVVec2\@\@AEAVRandom\@\@\@Z
 */
MCAPI void
spawnParticlesInArea(class ILevel&, uint32_t, enum class ParticleType, class Vec3 const&, class Vec2 const&, class Random&);
/**
 * @symbol ?spawnPukeParticles\@ActorParticles\@\@YAXIIVVec3\@\@0AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void spawnPukeParticles(uint32_t, uint32_t, class Vec3, class Vec3, class ILevel&, class Random&);
/**
 * @symbol ?spawnTreasureHuntingParticles\@ActorParticles\@\@YAXIVVec3\@\@0VVec2\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void spawnTreasureHuntingParticles(uint32_t, class Vec3, class Vec3, class Vec2, class ILevel&, class Random&);
// NOLINTEND

}; // namespace ActorParticles
