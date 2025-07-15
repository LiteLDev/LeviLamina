#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Context; }
namespace dcsctp { class HeartbeatAckChunk; }
namespace dcsctp { class HeartbeatRequestChunk; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { struct DcSctpOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class HeartbeatHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd82752;
    ::ll::UntypedStorage<8, 8>  mUnk6712ef;
    ::ll::UntypedStorage<8, 8>  mUnk2c70eb;
    ::ll::UntypedStorage<8, 8>  mUnkcba34b;
    ::ll::UntypedStorage<1, 1>  mUnke84df7;
    ::ll::UntypedStorage<8, 8>  mUnk831992;
    ::ll::UntypedStorage<8, 8>  mUnkcbba10;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatHandler& operator=(HeartbeatHandler const&);
    HeartbeatHandler(HeartbeatHandler const&);
    HeartbeatHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void HandleHeartbeatAck(::dcsctp::HeartbeatAckChunk chunk);

    MCNAPI void HandleHeartbeatRequest(::dcsctp::HeartbeatRequestChunk chunk);

    MCNAPI HeartbeatHandler(
        ::std::string_view             log_prefix,
        ::dcsctp::DcSctpOptions const& options,
        ::dcsctp::Context*             context,
        ::dcsctp::TimerManager*        timer_manager
    );

    MCNAPI ::webrtc::TimeDelta OnIntervalTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnTimeoutTimerExpiry();

    MCNAPI void RestartTimer();

    MCNAPI ~HeartbeatHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view             log_prefix,
        ::dcsctp::DcSctpOptions const& options,
        ::dcsctp::Context*             context,
        ::dcsctp::TimerManager*        timer_manager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
