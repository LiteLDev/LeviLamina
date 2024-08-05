#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorPostAiStep {
// NOLINTBEGIN
MCAPI void _tickEach(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>>, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct EnderDragonFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ParrotFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct SquidFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct WitherBossFlag>>, struct WitherBossPreAIStepResultComponent const>);
// NOLINTEND

}; // namespace ActorPostAiStep
