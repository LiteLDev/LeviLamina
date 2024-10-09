#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorNormalTick {
// NOLINTBEGIN
MCAPI void _tickEach(
    bool isClientSide,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct Exclude<class FlagComponent<struct ActorRemovedFlag>>,
        class ActorOwnerComponent> const&                                                              commonView,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BeeFlag>>> const& bees,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BatFlag>>> const& bats,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ExperienceOrbFlag>>> const& orbs,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FireworksRocketFlag>>> const&
                                                                                                               rockets,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FishingHookFlag>>> const& hooks,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>> const&       horses,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ItemActorFlag>>> const&   items,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MinecartFlag>>> const&  minecarts,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PandaFlag>>> const&     pandas,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PrimedTntFlag>>> const& tnts,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct SlimeFlag>>> const&     slimes,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct WolfFlag>>> const&      wolves,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ShulkerFlag>>> const&   shulkers,
    class ViewT<class StrictEntityContext, struct MinecartPreNormalTickBlockPosComponent const> const& minecartData,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>> const& slimeWasOnGround
);
// NOLINTEND

}; // namespace ActorNormalTick
