/**
 * @file  PersonaEmoteInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?createSideBySideResultSystem\@PersonaEmoteInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideResultSystem();
    /**
     * @symbol ?createSystem\@PersonaEmoteInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_personaEmoteInputSystem\@PersonaEmoteInputSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUEventingDispatcherComponent\@\@AEBUEmotePlayedTelemetryDataComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UEmotePlayedTelemetryDataComponent\@\@UShouldStopEmotingRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _personaEmoteInputSystem(class StrictEntityContext const &, struct EventingDispatcherComponent const &, struct EmotePlayedTelemetryDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EmotePlayedTelemetryDataComponent, struct ShouldStopEmotingRequestComponent>);

private:

};
