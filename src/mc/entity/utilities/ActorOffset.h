#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorOffset {
// NOLINTBEGIN
// symbol: ?getEyeOffset@ActorOffset@@YA?AVVec3@@AEBVEntityContext@@@Z
MCAPI class Vec3 getEyeOffset(class EntityContext const&);

// symbol: ?getHeadOffset@ActorOffset@@YA?AVVec3@@AEBVEntityContext@@@Z
MCAPI class Vec3 getHeadOffset(class EntityContext const&);

// symbol: ?getHeightOffset@ActorOffset@@YAMAEBVEntityContext@@@Z
MCAPI float getHeightOffset(class EntityContext const&);

// symbol: ?initializeActor@ActorOffset@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext&);

// symbol: ?setAABBRelativeScaling@ActorOffset@@YAXAEAVEntityContext@@V?$optional@VVec2@@@std@@111@Z
MCAPI void
setAABBRelativeScaling(class EntityContext&, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>);

// symbol: ?setAABBRelativeScalingAndScaleNow@ActorOffset@@YAXAEAVEntityContext@@V?$optional@VVec2@@@std@@111@Z
MCAPI void
setAABBRelativeScalingAndScaleNow(class EntityContext&, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>);

// symbol: ?setAbsoluteScaling@ActorOffset@@YAXAEAVEntityContext@@V?$optional@VVec3@@@std@@111@Z
MCAPI void
setAbsoluteScaling(class EntityContext&, std::optional<class Vec3>, std::optional<class Vec3>, std::optional<class Vec3>, std::optional<class Vec3>);

// symbol: ?setBreathingOffset@ActorOffset@@YAXAEAVEntityContext@@AEBVVec3@@@Z
MCAPI void setBreathingOffset(class EntityContext&, class Vec3 const&);

// symbol: ?setExplosionOffset@ActorOffset@@YAXAEAVEntityContext@@M@Z
MCAPI void setExplosionOffset(class EntityContext&, float);

// symbol: ?setEyeOffset@ActorOffset@@YAXAEAVEntityContext@@AEBVVec3@@@Z
MCAPI void setEyeOffset(class EntityContext&, class Vec3 const&);

// symbol: ?setHeightOffset@ActorOffset@@YAXAEAVEntityContext@@M@Z
MCAPI void setHeightOffset(class EntityContext&, float);

// symbol: ?setShulkerScaling@ActorOffset@@YAXAEAVEntityContext@@@Z
MCAPI void setShulkerScaling(class EntityContext&);
// NOLINTEND

}; // namespace ActorOffset
