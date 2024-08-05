#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace UpdateWingFlapValueSystemImpl {
// NOLINTBEGIN
MCAPI void
tick(entt::type_list<struct Include<class FlagComponent<struct ActorTickedFlag>>>, class Optional<struct OnGroundFlagComponent const>, struct WingFlapComponent&);
// NOLINTEND

}; // namespace UpdateWingFlapValueSystemImpl
