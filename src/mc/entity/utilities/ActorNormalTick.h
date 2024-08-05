#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorNormalTick {
// NOLINTBEGIN
MCAPI void _tickEach(bool, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>>, class ActorOwnerComponent> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BeeFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BatFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ExperienceOrbFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FireworksRocketFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FishingHookFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ItemActorFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MinecartFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PandaFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PrimedTntFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct SlimeFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct WolfFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ShulkerFlag>>> const&, class ViewT<class StrictEntityContext, struct MinecartPreNormalTickBlockPosComponent const> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>> const&);
// NOLINTEND

}; // namespace ActorNormalTick
