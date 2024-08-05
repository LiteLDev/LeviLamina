#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobJumpSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createDecrementNoJumpDelaySystem();

MCAPI struct TickingSystemWithInfo createMobJumpSystem();

MCAPI struct TickingSystemWithInfo createResetNoJumpDelaySystem();

MCAPI void doDecrementNoJumpDelaySystem(struct MobJumpComponent&);

MCAPI void
doMobJumpSystem(class StrictEntityContext const&, class Optional<class JumpControlComponent const>, class Optional<struct OnGroundFlagComponent const>, class Optional<class FlagComponent<struct PlayerComponentFlag> const>, class Optional<class FlagComponent<struct SquidFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<class FlagComponent<struct ImmuneToLavaDragFlag> const>, struct AABBShapeComponent const&, struct SwimAmountComponent const&, struct MobEffectsComponent const&, struct SubBBsComponent const&, struct ActorDataFlagComponent const&, struct MobJumpComponent&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct JumpFromGroundRequestFlag>>, class IConstBlockSource const&);

MCAPI void doResetNoJumpDelaySystem(class StrictEntityContext const&, struct MobJumpComponent&);
// NOLINTEND

}; // namespace MobJumpSystem
