#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorEnvironment {
// NOLINTBEGIN
// symbol: ?getHeadInWater@ActorEnvironment@@YA_NAEBVEntityContext@@@Z
MCAPI bool getHeadInWater(class EntityContext const& provider);

// symbol: ?getIsInLava@ActorEnvironment@@YA_NAEBVEntityContext@@@Z
MCAPI bool getIsInLava(class EntityContext const& provider);

// symbol: ?getIsInWater@ActorEnvironment@@YA_NAEBVEntityContext@@@Z
MCAPI bool getIsInWater(class EntityContext const& provider);

// symbol: ?setHeadInWater@ActorEnvironment@@YAXAEAVEntityContext@@_N@Z
MCAPI void setHeadInWater(class EntityContext& provider, bool value);

// symbol: ?setIsInWater@ActorEnvironment@@YAXAEAVEntityContext@@_N@Z
MCAPI void setIsInWater(class EntityContext& provider, bool value);
// NOLINTEND

}; // namespace ActorEnvironment
