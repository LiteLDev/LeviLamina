/**
 * @file  SneakTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SneakTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createActionSystem\@SneakTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createActionSystem();
    /**
     * @symbol ?createIntentSystem\@SneakTriggerSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createIntentSystem();
    /**
     * @symbol ?determineStatus\@SneakTriggerSystem\@\@YA?AUPlayerStatusTransitions\@1\@AEBUDetermineStatusArgs\@1\@\@Z
     */
    MCAPI struct SneakTriggerSystem::PlayerStatusTransitions determineStatus(struct SneakTriggerSystem::DetermineStatusArgs const &);
    /**
     * @symbol ?doActionTick\@SneakTriggerSystem\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUPlayerActionComponent\@\@AEAUSynchedActorDataComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@\@Z
     */
    MCAPI void doActionTick(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const &, struct PlayerActionComponent const &, struct SynchedActorDataComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent> &);
    /**
     * @symbol ?doIntentTick\@SneakTriggerSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUMoveInputComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorGameTypeComponent\@\@AEBUPlayerInputRequestComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUPlayerActionComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$OptionalGlobalT\@$$CBUBaseGameVersionComponent\@\@VEntityRegistryBase\@\@\@\@AEBUExternalDataInterface\@\@\@Z
     */
    MCAPI void doIntentTick(class StrictEntityContext const &, struct MoveInputComponent const &, struct AbilitiesComponent const &, struct ActorGameTypeComponent const &, struct PlayerInputRequestComponent const &, struct SynchedActorDataComponent const &, struct PlayerActionComponent &, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct PassengerComponent const>, class OptionalGlobalT<struct BaseGameVersionComponent const, class EntityRegistryBase>, struct ExternalDataInterface const &);

};