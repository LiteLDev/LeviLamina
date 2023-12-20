#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/detail/Timeout.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class Timeout; }
namespace dcsctp { class TimeoutTag; }
// clang-format on

namespace dcsctp {

class TaskQueueTimeoutFactory {
public:
    // TaskQueueTimeoutFactory inner types declare
    // clang-format off
    class TaskQueueTimeout;
    // clang-format on

    // TaskQueueTimeoutFactory inner types define
    class TaskQueueTimeout : public ::dcsctp::Timeout {
    public:
        // prevent constructor by default
        TaskQueueTimeout& operator=(TaskQueueTimeout const&);
        TaskQueueTimeout(TaskQueueTimeout const&);
        TaskQueueTimeout();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1TaskQueueTimeout@TaskQueueTimeoutFactory@dcsctp@@UEAA@XZ
        virtual ~TaskQueueTimeout();

        // vIndex: 1, symbol:
        // ?Start@TaskQueueTimeout@TaskQueueTimeoutFactory@dcsctp@@UEAAXVDurationMs@3@V?$StrongAlias@VTimeoutTag@dcsctp@@_K@webrtc@@@Z
        virtual void Start(class dcsctp::DurationMs, class webrtc::StrongAlias<class dcsctp::TimeoutTag, uint64>);

        // vIndex: 2, symbol: ?Stop@TaskQueueTimeout@TaskQueueTimeoutFactory@dcsctp@@UEAAXXZ
        virtual void Stop();

        // vIndex: 3, symbol:
        // ?Restart@Timeout@dcsctp@@UEAAXVDurationMs@2@V?$StrongAlias@VTimeoutTag@dcsctp@@_K@webrtc@@@Z
        virtual void Restart(class dcsctp::DurationMs, class webrtc::StrongAlias<class dcsctp::TimeoutTag, uint64>);

        // symbol:
        // ??0TaskQueueTimeout@TaskQueueTimeoutFactory@dcsctp@@QEAA@AEAV12@W4DelayPrecision@TaskQueueBase@webrtc@@@Z
        MCAPI TaskQueueTimeout(class dcsctp::TaskQueueTimeoutFactory&, ::webrtc::TaskQueueBase::DelayPrecision);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TaskQueueTimeoutFactory& operator=(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory();

public:
    // NOLINTBEGIN
    // symbol: ??1TaskQueueTimeoutFactory@dcsctp@@QEAA@XZ
    MCAPI ~TaskQueueTimeoutFactory();

    // NOLINTEND
};

}; // namespace dcsctp
