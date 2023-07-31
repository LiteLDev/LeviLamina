#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace MobJumpSystemImpl {
// NOLINTBEGIN
/**
 * @symbol ?doDecrementNoJumpDelaySystem\@MobJumpSystemImpl\@\@YAXAEAUMobJumpComponent\@\@\@Z
 */
MCAPI void doDecrementNoJumpDelaySystem(struct MobJumpComponent&);
/**
 * @symbol
 * ?doMobJumpSystem\@MobJumpSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBVJumpControlComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@USquidFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasAutoJumpingFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UImmuneToLavaDragFlag\@\@\@\@\@\@AEBUAABBShapeComponent\@\@AEBUSwimAmountComponent\@\@AEBUMobEffectsComponent\@\@AEBUSubBBsComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUMobJumpComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UJumpFromGroundRequestFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void doMobJumpSystem(class StrictEntityContext const&, class Optional<class JumpControlComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct PlayerComponentFlag> const>, class Optional<class FlagComponent<struct SquidFlag> const>, class Optional<class FlagComponent<struct WasAutoJumpingFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<class FlagComponent<struct ImmuneToLavaDragFlag> const>, struct AABBShapeComponent const&, struct SwimAmountComponent const&, struct MobEffectsComponent const&, struct SubBBsComponent const&, struct SynchedActorDataComponent const&, struct MobJumpComponent&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct JumpFromGroundRequestFlag>>, class IConstBlockSource const&);
/**
 * @symbol ?doResetNoJumpDelaySystem\@MobJumpSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEAUMobJumpComponent\@\@\@Z
 */
MCAPI void doResetNoJumpDelaySystem(class StrictEntityContext const&, struct MobJumpComponent&);
// NOLINTEND

}; // namespace MobJumpSystemImpl
