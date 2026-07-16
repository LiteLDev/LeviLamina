#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct EmotePlayedTelemetryDataComponent;
struct EventingDispatcherComponent;
struct ShouldStopEmotingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class PersonaEmoteInputSystem {
public:
    // PersonaEmoteInputSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::ShouldStopEmotingRequestComponent>,
        ::EventingDispatcherComponent const,
        ::EmotePlayedTelemetryDataComponent const>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
