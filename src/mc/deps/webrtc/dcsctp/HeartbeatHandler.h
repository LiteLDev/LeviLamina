#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Context; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class HeartbeatAckChunk; }
namespace dcsctp { class HeartbeatRequestChunk; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { struct DcSctpOptions; }
// clang-format on

namespace dcsctp {

class HeartbeatHandler {
public:
    // prevent constructor by default
    HeartbeatHandler& operator=(HeartbeatHandler const&);
    HeartbeatHandler(HeartbeatHandler const&);
    HeartbeatHandler();

public:
    // NOLINTBEGIN
    // symbol: ?HandleHeartbeatAck@HeartbeatHandler@dcsctp@@QEAAXVHeartbeatAckChunk@2@@Z
    MCAPI void HandleHeartbeatAck(class dcsctp::HeartbeatAckChunk);

    // symbol: ?HandleHeartbeatRequest@HeartbeatHandler@dcsctp@@QEAAXVHeartbeatRequestChunk@2@@Z
    MCAPI void HandleHeartbeatRequest(class dcsctp::HeartbeatRequestChunk);

    // symbol:
    // ??0HeartbeatHandler@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUDcSctpOptions@1@PEAVContext@1@PEAVTimerManager@1@@Z
    MCAPI
    HeartbeatHandler(std::string_view, struct dcsctp::DcSctpOptions const&, class dcsctp::Context*, class dcsctp::TimerManager*);

    // symbol: ?RestartTimer@HeartbeatHandler@dcsctp@@QEAAXXZ
    MCAPI void RestartTimer();

    // symbol: ??1HeartbeatHandler@dcsctp@@QEAA@XZ
    MCAPI ~HeartbeatHandler();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnIntervalTimerExpiry@HeartbeatHandler@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnIntervalTimerExpiry();

    // symbol: ?OnTimeoutTimerExpiry@HeartbeatHandler@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnTimeoutTimerExpiry();

    // NOLINTEND
};

}; // namespace dcsctp
