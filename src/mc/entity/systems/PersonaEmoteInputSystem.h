#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"

class PersonaEmoteInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONAEMOTEINPUTSYSTEM
public:
    PersonaEmoteInputSystem& operator=(PersonaEmoteInputSystem const&) = delete;
    PersonaEmoteInputSystem(PersonaEmoteInputSystem const&)            = delete;
    PersonaEmoteInputSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PersonaEmoteInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_personaEmoteInputSystem\@PersonaEmoteInputSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUEventingDispatcherComponent\@\@AEBUEmotePlayedTelemetryDataComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UEmotePlayedTelemetryDataComponent\@\@UShouldStopEmotingRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _personaEmoteInputSystem(class StrictEntityContext const&, struct EventingDispatcherComponent const&, struct EmotePlayedTelemetryDataComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EmotePlayedTelemetryDataComponent, struct ShouldStopEmotingRequestComponent>);
    /**
     * @symbol
     * ?_tickPersonaEmoteInputSystem\@PersonaEmoteInputSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UShouldStopEmotingRequestComponent\@\@\@\@$$CBUEventingDispatcherComponent\@\@$$CBUEmotePlayedTelemetryDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UEmotePlayedTelemetryDataComponent\@\@UShouldStopEmotingRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tickPersonaEmoteInputSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct ShouldStopEmotingRequestComponent>, struct EventingDispatcherComponent const, struct EmotePlayedTelemetryDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EmotePlayedTelemetryDataComponent, struct ShouldStopEmotingRequestComponent>);

private:
};
