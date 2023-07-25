#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename... T0> struct Exclude;
template<typename... T0> struct Include;
// clang-format on

namespace MoveSpeedCapSystemImpl {
/**
 * @symbol
 * ?tickMoveSpeedCap\@MoveSpeedCapSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEAUMoveRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
tickMoveSpeedCap(class StrictEntityContext&, struct MoveRequestComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>);

}; // namespace MoveSpeedCapSystemImpl
