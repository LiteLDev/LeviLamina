#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct IsHorizontalPoseFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace UpdateHorizontalPoseSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void update(
    ::StrictEntityContext const&                       entity,
    ::ActorDataFlagComponent const&                    flags,
    ::EntityModifier<::IsHorizontalPoseFlagComponent>& modifier
);
// NOLINTEND

} // namespace UpdateHorizontalPoseSystem
