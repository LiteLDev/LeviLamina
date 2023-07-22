/**
 * @file  PersonaEmoteInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PersonaEmoteInputSystem.
 *
 */
class PersonaEmoteInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONAEMOTEINPUTSYSTEM
public:
    class PersonaEmoteInputSystem& operator=(class PersonaEmoteInputSystem const &) = delete;
    PersonaEmoteInputSystem(class PersonaEmoteInputSystem const &) = delete;
    PersonaEmoteInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@PersonaEmoteInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_personaEmoteInputSystem\@PersonaEmoteInputSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUEventingDispatcherComponent\@\@AEAUMoveInputComponent\@\@AEAUSynchedActorDataComponent\@\@AEAUVanillaClientGameplayComponent\@\@V?$Optional\@UEmotePlayedTelemetryDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UEmotePlayedTelemetryDataComponent\@\@\@\@\@Z
     */
    MCAPI static void _personaEmoteInputSystem(class StrictEntityContext const &, struct EventingDispatcherComponent const &, struct MoveInputComponent &, struct SynchedActorDataComponent &, struct VanillaClientGameplayComponent &, class Optional<struct EmotePlayedTelemetryDataComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EmotePlayedTelemetryDataComponent>);

private:

};