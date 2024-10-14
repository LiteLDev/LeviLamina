#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptFormPromiseTracker : public Bedrock::EnableNonOwnerReferences {
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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    char padding[0x8]; // parent class EventListenerDispatcher<PlayerEventListener>
    int  mLastRequestId;
    std::unordered_map<uint, ScriptFormPromiseTracker::FromRequest> mFormRequests;

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&);

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onEvent(struct PlayerFormResponseEvent const& formResponseEvent);

    MCVAPI ::EventResult onEvent(struct PlayerFormCloseEvent const& formCloseEvent);

    MCAPI ScriptFormPromiseTracker();

    MCAPI void handleFormResponse(uint formId, class Json::Value const& formResponse);

    MCAPI void handlePlayerQuit(class NetworkIdentifier const& playerId);

    MCAPI void rejectAllForShutdown();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::EventResult onEvent$(struct PlayerFormResponseEvent const& formResponseEvent);

    MCAPI ::EventResult onEvent$(struct PlayerFormCloseEvent const& formCloseEvent);

    // NOLINTEND
};
