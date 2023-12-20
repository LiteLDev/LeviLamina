#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class Timeout; }
namespace dcsctp { class TimerGenerationTag; }
namespace dcsctp { class TimerIDTag; }
namespace dcsctp { struct TimerOptions; }
// clang-format on

namespace dcsctp {

class Timer {
public:
    // prevent constructor by default
    Timer& operator=(Timer const&);
    Timer(Timer const&);
    Timer();

public:
    // NOLINTBEGIN
    // symbol: ?Start@Timer@dcsctp@@QEAAXXZ
    MCAPI void Start();

    // symbol: ?Stop@Timer@dcsctp@@QEAAXXZ
    MCAPI void Stop();

    // symbol: ??1Timer@dcsctp@@QEAA@XZ
    MCAPI ~Timer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0Timer@dcsctp@@AEAA@V?$StrongAlias@VTimerIDTag@dcsctp@@I@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$function@$$A6A?AV?$optional@VDurationMs@dcsctp@@@std@@XZ@5@V?$function@$$A6AXXZ@5@V?$unique_ptr@VTimeout@dcsctp@@U?$default_delete@VTimeout@dcsctp@@@std@@@5@AEBUTimerOptions@1@@Z
    MCAPI
    Timer(class webrtc::StrongAlias<class dcsctp::TimerIDTag, uint>, std::string_view, std::function<std::optional<class dcsctp::DurationMs>(void)>, std::function<void(void)>, std::unique_ptr<class dcsctp::Timeout>, struct dcsctp::TimerOptions const&);

    // symbol: ?Trigger@Timer@dcsctp@@AEAAXV?$StrongAlias@VTimerGenerationTag@dcsctp@@I@webrtc@@@Z
    MCAPI void Trigger(class webrtc::StrongAlias<class dcsctp::TimerGenerationTag, uint>);

    // NOLINTEND
};

}; // namespace dcsctp
