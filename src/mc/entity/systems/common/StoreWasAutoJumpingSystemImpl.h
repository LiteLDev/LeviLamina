#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace StoreWasAutoJumpingSystemImpl {
// NOLINTBEGIN
// symbol:
// ?addOrRemoveWasAutoJumpingFlag@StoreWasAutoJumpingSystemImpl@@YAXU?$type_list@U?$Include@V?$FlagComponent@ULocalPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@UAutoJumpingFlag@@@@@@V?$EntityModifier@V?$FlagComponent@UWasAutoJumpingFlag@@@@@@@Z
MCAPI void addOrRemoveWasAutoJumpingFlag(entt::type_list<struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, class Optional<class FlagComponent<struct AutoJumpingFlag> const>, class EntityModifier<class FlagComponent<struct WasAutoJumpingFlag>>);
// NOLINTEND

}; // namespace StoreWasAutoJumpingSystemImpl
