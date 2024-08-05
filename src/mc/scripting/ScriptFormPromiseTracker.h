#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptFormPromiseTracker {
public:
    // ScriptFormPromiseTracker inner types declare
    // clang-format off
    struct FromRequest;
    // clang-format on

    // ScriptFormPromiseTracker inner types define
    struct FromRequest {
    public:
        // prevent constructor by default
        FromRequest& operator=(FromRequest const&);
        FromRequest(FromRequest const&);
        FromRequest();

    public:
        // NOLINTBEGIN
        MCAPI ~FromRequest();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&);

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onEvent(struct PlayerFormResponseEvent const& formResponseEvent);

    MCVAPI ::EventResult onEvent(struct PlayerFormCloseEvent const& formCloseEvent);

    MCAPI ScriptFormPromiseTracker();

    MCAPI void handleFormResponse(uint formId, class Json::Value const&);

    MCAPI void handlePlayerQuit(class NetworkIdentifier const& playerId);

    MCAPI void rejectAllForShutdown();

    // NOLINTEND
};
