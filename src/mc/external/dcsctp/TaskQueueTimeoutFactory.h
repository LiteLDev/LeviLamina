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
        // member functions
        // NOLINTBEGIN
        MCNAPI TaskQueueTimeout(::dcsctp::TaskQueueTimeoutFactory&, ::webrtc::TaskQueueBase::DelayPrecision);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dcsctp::TaskQueueTimeoutFactory&, ::webrtc::TaskQueueBase::DelayPrecision);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TaskQueueTimeoutFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
