#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorParticles {
/**
 * @symbol ?calculateDustParticleNumberFromFall\@ActorParticles\@\@YAIM\@Z
 */
MCAPI unsigned int calculateDustParticleNumberFromFall(float); // NOLINT
/**
 * @symbol ?getDustParticlePosition\@ActorParticles\@\@YA?AVVec3\@\@AEBV2\@AEBVAABB\@\@\@Z
 */
MCAPI class Vec3 getDustParticlePosition(class Vec3 const&, class AABB const&); // NOLINT
/**
 * @symbol ?spawnBalloonPopParticles\@ActorParticles\@\@YAXIVAABB\@\@W4PaletteColor\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void
spawnBalloonPopParticles(unsigned int, class AABB, enum class PaletteColor, class ILevel&, class Random&); // NOLINT
/**
 * @symbol ?spawnDeathParticles\@ActorParticles\@\@YAXVVec3\@\@VVec2\@\@MAEAVILevel\@\@\@Z
 */
MCAPI void spawnDeathParticles(class Vec3, class Vec2, float, class ILevel&); // NOLINT
/**
 * @symbol ?spawnDustParticlesFromFalling\@ActorParticles\@\@YAXIVVec3\@\@AEAVILevel\@\@AEBVBlock\@\@VBlockPos\@\@\@Z
 */
MCAPI void
spawnDustParticlesFromFalling(unsigned int, class Vec3, class ILevel&, class Block const&, class BlockPos); // NOLINT
/**
 * @symbol
 * ?spawnParticlesInArea\@ActorParticles\@\@YAXAEAVILevel\@\@IW4ParticleType\@\@AEBVVec3\@\@AEBVVec2\@\@AEAVRandom\@\@\@Z
 */
MCAPI void
spawnParticlesInArea(class ILevel&, unsigned int, enum class ParticleType, class Vec3 const&, class Vec2 const&, class Random&); // NOLINT
/**
 * @symbol ?spawnPukeParticles\@ActorParticles\@\@YAXIIVVec3\@\@0AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void
spawnPukeParticles(unsigned int, unsigned int, class Vec3, class Vec3, class ILevel&, class Random&); // NOLINT
/**
 * @symbol ?spawnTreasureHuntingParticles\@ActorParticles\@\@YAXIVVec3\@\@0VVec2\@\@AEAVILevel\@\@AEAVRandom\@\@\@Z
 */
MCAPI void
spawnTreasureHuntingParticles(unsigned int, class Vec3, class Vec3, class Vec2, class ILevel&, class Random&); // NOLINT

}; // namespace ActorParticles
