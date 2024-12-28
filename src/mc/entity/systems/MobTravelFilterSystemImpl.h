#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobTravelComponent;
// clang-format on

namespace MobTravelFilterSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void addMobTravelComponent(::StrictEntityContext const& context, ::EntityModifier<::MobTravelComponent> mod);
// NOLINTEND

} // namespace MobTravelFilterSystemImpl
