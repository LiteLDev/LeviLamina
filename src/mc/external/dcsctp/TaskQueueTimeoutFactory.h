#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/TaskQueueBase.h"

namespace dcsctp {

class TaskQueueTimeoutFactory {
public:
    // TaskQueueTimeoutFactory inner types declare
    // clang-format off
    class TaskQueueTimeout;
    // clang-format on

    // TaskQueueTimeoutFactory inner types define
    class TaskQueueTimeout {
    public:
        // prevent constructor by default
        TaskQueueTimeout& operator=(TaskQueueTimeout const&);
        TaskQueueTimeout(TaskQueueTimeout const&);
        TaskQueueTimeout();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI TaskQueueTimeout(::dcsctp::TaskQueueTimeoutFactory&, ::webrtc::TaskQueueBase::DelayPrecision);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::dcsctp::TaskQueueTimeoutFactory&, ::webrtc::TaskQueueBase::DelayPrecision);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TaskQueueTimeoutFactory& operator=(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TaskQueueTimeoutFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
