#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        FromRequest& operator=(FromRequest const&) = delete;
        FromRequest(FromRequest const&)            = delete;
        FromRequest()                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1FromRequest\@ScriptFormPromiseTracker\@\@QEAA\@XZ
         */
        MCAPI ~FromRequest();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&) = delete;
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTFORMPROMISETRACKER
    /**
     * @symbol ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormResponseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormResponseEvent const&);
    /**
     * @symbol ?onEvent\@ScriptFormPromiseTracker\@\@UEAA?AW4EventResult\@\@AEBUPlayerFormCloseEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormCloseEvent const&);
#endif
    /**
     * @symbol ??0ScriptFormPromiseTracker\@\@QEAA\@XZ
     */
    MCAPI ScriptFormPromiseTracker();
    /**
     * @symbol ?handleFormResponse\@ScriptFormPromiseTracker\@\@QEAAXIAEBVValue\@Json\@\@\@Z
     */
    MCAPI void handleFormResponse(unsigned int, class Json::Value const&);
    /**
     * @symbol ?handlePlayerQuit\@ScriptFormPromiseTracker\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void handlePlayerQuit(class NetworkIdentifier const&);
    /**
     * @symbol ?rejectAllForShutdown\@ScriptFormPromiseTracker\@\@QEAAXXZ
     */
    MCAPI void rejectAllForShutdown();
    // NOLINTEND
};
