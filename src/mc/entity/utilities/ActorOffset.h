#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorOffset {
/**
 * @symbol ?getBreathingOffset\@ActorOffset\@\@YA?AVVec3\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec3 getBreathingOffset(class EntityContext const&);
/**
 * @symbol ?getEyeOffset\@ActorOffset\@\@YA?AVVec3\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec3 getEyeOffset(class EntityContext const&);
/**
 * @symbol ?getHeadOffset\@ActorOffset\@\@YA?AVVec3\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec3 getHeadOffset(class EntityContext const&);
/**
 * @symbol ?getHeightOffset\@ActorOffset\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getHeightOffset(class EntityContext const&);
/**
 * @symbol ?initializeActor\@ActorOffset\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&);
/**
 * @symbol ?setBreathingOffset\@ActorOffset\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
 */
MCAPI void setBreathingOffset(class EntityContext&, class Vec3 const&);
/**
 * @symbol ?setExplosionOffset\@ActorOffset\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setExplosionOffset(class EntityContext&, float);
/**
 * @symbol ?setEyeOffset\@ActorOffset\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
 */
MCAPI void setEyeOffset(class EntityContext&, class Vec3 const&);
/**
 * @symbol ?setHeightOffset\@ActorOffset\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setHeightOffset(class EntityContext&, float);
/**
 * @symbol ?setOffsets\@ActorOffset\@\@YAXAEAVEntityContext\@\@V?$optional\@VVec3\@\@\@std\@\@111\@Z
 */
MCAPI void
setOffsets(class EntityContext&, class std::optional<class Vec3>, class std::optional<class Vec3>, class std::optional<class Vec3>, class std::optional<class Vec3>);

}; // namespace ActorOffset
