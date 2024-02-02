#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
        // symbol: ??1FromRequest@ScriptFormPromiseTracker@@QEAA@XZ
        MCAPI ~FromRequest();

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
    // symbol: ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormResponseEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerFormResponseEvent const& formResponseEvent);

    // symbol: ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormCloseEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerFormCloseEvent const& formCloseEvent);

    // symbol: ??0ScriptFormPromiseTracker@@QEAA@XZ
    MCAPI ScriptFormPromiseTracker();

    // symbol: ?handleFormResponse@ScriptFormPromiseTracker@@QEAAXIAEBVValue@Json@@@Z
    MCAPI void handleFormResponse(uint formId, class Json::Value const&);

    // symbol: ?handlePlayerQuit@ScriptFormPromiseTracker@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void handlePlayerQuit(class NetworkIdentifier const& playerId);

    // symbol: ?rejectAllForShutdown@ScriptFormPromiseTracker@@QEAAXXZ
    MCAPI void rejectAllForShutdown();

    // NOLINTEND
};
