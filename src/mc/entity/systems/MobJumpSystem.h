#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobJumpSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createDecrementNoJumpDelaySystem();

MCAPI struct TickingSystemWithInfo createMobJumpSystem();

MCAPI struct TickingSystemWithInfo createResetNoJumpDelaySystem();

MCAPI void doDecrementNoJumpDelaySystem(struct MobJumpComponent& mobJumpComponent);

MCAPI void doMobJumpSystem(
    class StrictEntityContext const&                                            context,
    class Optional<class JumpControlComponent const>                            jumpControl,
    class Optional<struct OnGroundFlagComponent const>                          onGround,
    class Optional<class FlagComponent<struct PlayerComponentFlag> const>       isPlayer,
    class Optional<class FlagComponent<struct SquidFlag> const>                 isSquid,
    class Optional<class FlagComponent<struct InWaterFlag> const>               isInWater,
    class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>      breathingPointInWater,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>        canStandOnSnow,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>  isLightweightFamily,
    class Optional<class FlagComponent<struct ImmuneToLavaDragFlag> const>      isImmuneToLavaDrag,
    struct AABBShapeComponent const&                                            aabbShape,
    struct SwimAmountComponent const&                                           swimAmount,
    struct MobEffectsComponent const&                                           mobEffects,
    struct SubBBsComponent const&                                               subBBs,
    struct ActorDataFlagComponent const&                                        synchedActorData,
    struct MobJumpComponent&                                                    mobJump,
    struct StateVectorComponent&                                                stateVector,
    class EntityModifier<class FlagComponent<struct JumpFromGroundRequestFlag>> entityModifier,
    class IConstBlockSource const&                                              region
);

MCAPI void doResetNoJumpDelaySystem(class StrictEntityContext const&, struct MobJumpComponent& mobJumpComponent);
// NOLINTEND

}; // namespace MobJumpSystem
