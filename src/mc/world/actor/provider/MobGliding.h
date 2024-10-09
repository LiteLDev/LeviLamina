#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobGliding {
// NOLINTBEGIN
MCAPI int getFallFlyTicks(class EntityContext const& provider);

MCAPI void initializeMob(class EntityContext& provider);

MCAPI void setArmorFlyEnabled(class EntityContext& provider, bool value);
// NOLINTEND

}; // namespace MobGliding
