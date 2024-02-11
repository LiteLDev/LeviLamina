#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobGliding {
// NOLINTBEGIN
// symbol: ?getFallFlyTicks@MobGliding@@YAHAEBVEntityContext@@@Z
MCAPI int getFallFlyTicks(class EntityContext const& provider);

// symbol: ?initializeMob@MobGliding@@YAXAEAVEntityContext@@@Z
MCAPI void initializeMob(class EntityContext& provider);

// symbol: ?setArmorFlyEnabled@MobGliding@@YAXAEAVEntityContext@@_N@Z
MCAPI void setArmorFlyEnabled(class EntityContext& provider, bool value);
// NOLINTEND

}; // namespace MobGliding
