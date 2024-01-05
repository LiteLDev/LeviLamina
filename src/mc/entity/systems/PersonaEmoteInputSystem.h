#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"

class PersonaEmoteInputSystem {
public:
    // prevent constructor by default
    PersonaEmoteInputSystem& operator=(PersonaEmoteInputSystem const&);
    PersonaEmoteInputSystem(PersonaEmoteInputSystem const&);
    PersonaEmoteInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PersonaEmoteInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_personaEmoteInputSystem@PersonaEmoteInputSystem@@CAXAEBVStrictEntityContext@@AEBUEventingDispatcherComponent@@AEBUEmotePlayedTelemetryDataComponent@@V?$ViewT@VStrictEntityContext@@UEventingRequestQueueComponent@@@@V?$EntityModifier@UEmotePlayedTelemetryDataComponent@@UShouldStopEmotingRequestComponent@@@@@Z
    MCAPI static void _personaEmoteInputSystem(
        class StrictEntityContext const& entity,
        struct EventingDispatcherComponent const&,
        struct EmotePlayedTelemetryDataComponent const&,
        class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>,
        class EntityModifier<struct EmotePlayedTelemetryDataComponent, struct ShouldStopEmotingRequestComponent>
            modifier
    );

    // symbol:
    // ?_tickPersonaEmoteInputSystem@PersonaEmoteInputSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@UShouldStopEmotingRequestComponent@@@@$$CBUEventingDispatcherComponent@@$$CBUEmotePlayedTelemetryDataComponent@@@@V?$ViewT@VStrictEntityContext@@UEventingRequestQueueComponent@@@@V?$EntityModifier@UEmotePlayedTelemetryDataComponent@@UShouldStopEmotingRequestComponent@@@@@Z
    MCAPI static void _tickPersonaEmoteInputSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct ShouldStopEmotingRequestComponent>,
            struct EventingDispatcherComponent const,
            struct EmotePlayedTelemetryDataComponent const> view,
        class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>,
        class EntityModifier<struct EmotePlayedTelemetryDataComponent, struct ShouldStopEmotingRequestComponent>
            modifier
    );

    // NOLINTEND
};
