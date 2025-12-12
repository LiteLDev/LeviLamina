#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Timeout.h"
#include "mc/external/webrtc/StrongAlias.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk58e252;
        ::ll::UntypedStorage<4, 4> mUnkf46b77;
        ::ll::UntypedStorage<8, 8> mUnk4acd0a;
        ::ll::UntypedStorage<8, 8> mUnk95e16d;
        ::ll::UntypedStorage<8, 8> mUnkaf35c0;
        ::ll::UntypedStorage<8, 8> mUnk1f5244;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskQueueTimeout& operator=(TaskQueueTimeout const&);
        TaskQueueTimeout(TaskQueueTimeout const&);
        TaskQueueTimeout();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~TaskQueueTimeout() /*override*/;

        virtual void Start(
            ::dcsctp::DurationMs                                duration_ms,
            ::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id
        ) /*override*/;

        virtual void Stop() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        TaskQueueTimeout(::dcsctp::TaskQueueTimeoutFactory& parent, ::webrtc::TaskQueueBase::DelayPrecision precision);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::dcsctp::TaskQueueTimeoutFactory& parent, ::webrtc::TaskQueueBase::DelayPrecision precision);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void
        $Start(::dcsctp::DurationMs duration_ms, ::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id);

        MCNAPI void $Stop();


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkee788f;
    ::ll::UntypedStorage<8, 8>  mUnk85b887;
    ::ll::UntypedStorage<8, 64> mUnkdb4030;
    ::ll::UntypedStorage<8, 64> mUnk8b0bf2;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskQueueTimeoutFactory& operator=(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory(TaskQueueTimeoutFactory const&);
    TaskQueueTimeoutFactory();

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
