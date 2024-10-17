#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorEnvironment {
// NOLINTBEGIN
MCAPI bool getHeadInWater(class EntityContext const& provider);

MCAPI bool getIsInLava(class EntityContext const& provider);

MCAPI bool getIsInWater(class EntityContext const& provider);

MCAPI void setHeadInWater(class EntityContext& provider, bool value);

MCAPI void setIsInWater(class EntityContext& provider, bool value);
// NOLINTEND

}; // namespace ActorEnvironment
