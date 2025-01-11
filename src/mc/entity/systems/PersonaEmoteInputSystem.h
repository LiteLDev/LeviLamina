#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct EmotePlayedTelemetryDataComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct ShouldStopEmotingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class PersonaEmoteInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _personaEmoteInputSystem(
        ::StrictEntityContext const&                                    entity,
        ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
        ::EmotePlayedTelemetryDataComponent const&                      emotePlayedTelemetryDataComponent,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView,
        ::EntityModifier<::EmotePlayedTelemetryDataComponent, ::ShouldStopEmotingRequestComponent> modifier
    );

    MCAPI static void _tickPersonaEmoteInputSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldStopEmotingRequestComponent>,
            ::EventingDispatcherComponent const,
            ::EmotePlayedTelemetryDataComponent const>                                             view,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent>                            requestQueueView,
        ::EntityModifier<::EmotePlayedTelemetryDataComponent, ::ShouldStopEmotingRequestComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
