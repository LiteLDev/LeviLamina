#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MobGliding {
// functions
// NOLINTBEGIN
MCAPI int getFallFlyTicks(::EntityContext const& provider);

MCAPI void initializeMob(::EntityContext& provider);

MCAPI void setArmorFlyEnabled(::EntityContext& provider, bool value);
// NOLINTEND

} // namespace MobGliding
