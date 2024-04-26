#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobJumpSystem {
// NOLINTBEGIN
// symbol: ?createCleanupSystem@MobJumpSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCleanupSystem();

// symbol: ?createDecrementNoJumpDelaySystem@MobJumpSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createDecrementNoJumpDelaySystem();

// symbol: ?createMobJumpSystem@MobJumpSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createMobJumpSystem();

// symbol: ?createResetNoJumpDelaySystem@MobJumpSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createResetNoJumpDelaySystem();

// symbol: ?doDecrementNoJumpDelaySystem@MobJumpSystem@@YAXAEAUMobJumpComponent@@@Z
MCAPI void doDecrementNoJumpDelaySystem(struct MobJumpComponent&);

// symbol:
// ?doMobJumpSystem@MobJumpSystem@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBVJumpControlComponent@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@USquidFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UWasAutoJumpingFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UActorHeadInWaterFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UImmuneToLavaDragFlag@@@@@@AEBUAABBShapeComponent@@AEBUSwimAmountComponent@@AEBUMobEffectsComponent@@AEBUSubBBsComponent@@AEBUActorDataFlagComponent@@AEAUMobJumpComponent@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UJumpFromGroundRequestFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void doMobJumpSystem(class StrictEntityContext const&, class Optional<class JumpControlComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct PlayerComponentFlag> const>, class Optional<class FlagComponent<struct SquidFlag> const>, class Optional<class FlagComponent<struct WasAutoJumpingFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<class FlagComponent<struct ImmuneToLavaDragFlag> const>, struct AABBShapeComponent const&, struct SwimAmountComponent const&, struct MobEffectsComponent const&, struct SubBBsComponent const&, struct ActorDataFlagComponent const&, struct MobJumpComponent&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct JumpFromGroundRequestFlag>>, class IConstBlockSource const&);

// symbol: ?doResetNoJumpDelaySystem@MobJumpSystem@@YAXAEBVStrictEntityContext@@AEAUMobJumpComponent@@@Z
MCAPI void doResetNoJumpDelaySystem(class StrictEntityContext const&, struct MobJumpComponent&);
// NOLINTEND

}; // namespace MobJumpSystem
