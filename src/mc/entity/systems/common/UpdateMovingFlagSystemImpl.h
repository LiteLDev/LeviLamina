#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace UpdateMovingFlagSystemImpl {
// NOLINTBEGIN
MCAPI void doTickMovingFlagSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct StateVectorComponent const&, class Optional<struct PassengerComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ControlledByLocalInstanceFlag>>>, class EntityModifier<class FlagComponent<struct MovingFlag>>);
// NOLINTEND

}; // namespace UpdateMovingFlagSystemImpl
