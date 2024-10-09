#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace UpdateWingFlapValueSystemImpl {
// NOLINTBEGIN
MCAPI void tick(
    entt::type_list<struct Include<class FlagComponent<struct ActorTickedFlag>>>,
    class Optional<struct OnGroundFlagComponent const> onGroundComponent,
    struct WingFlapComponent&                          wingFlapComponent
);
// NOLINTEND

}; // namespace UpdateWingFlapValueSystemImpl
