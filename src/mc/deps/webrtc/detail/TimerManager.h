#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct TimerOptions; }
// clang-format on

namespace dcsctp {

class TimerManager {
public:
    // prevent constructor by default
    TimerManager& operator=(TimerManager const&);
    TimerManager(TimerManager const&);
    TimerManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateTimer@TimerManager@dcsctp@@QEAA?AV?$unique_ptr@VTimer@dcsctp@@U?$default_delete@VTimer@dcsctp@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@V?$function@$$A6A?AV?$optional@VDurationMs@dcsctp@@@std@@XZ@4@AEBUTimerOptions@2@@Z
    MCAPI std::unique_ptr<class dcsctp::Timer>
    CreateTimer(std::string_view, std::function<std::optional<class dcsctp::DurationMs>(void)>, struct dcsctp::TimerOptions const&);

    // symbol: ?HandleTimeout@TimerManager@dcsctp@@QEAAXV?$StrongAlias@VTimeoutTag@dcsctp@@_K@webrtc@@@Z
    MCAPI void HandleTimeout(class webrtc::StrongAlias<class dcsctp::TimeoutTag, uint64>);

    // symbol: ??1TimerManager@dcsctp@@QEAA@XZ
    MCAPI ~TimerManager();

    // NOLINTEND
};

}; // namespace dcsctp
