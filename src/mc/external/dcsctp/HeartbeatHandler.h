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
    // prevent constructor by default
    HeartbeatHandler& operator=(HeartbeatHandler const&);
    HeartbeatHandler(HeartbeatHandler const&);
    HeartbeatHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void HandleHeartbeatAck(::dcsctp::HeartbeatAckChunk);

    MCAPI void HandleHeartbeatRequest(::dcsctp::HeartbeatRequestChunk);

    MCAPI
    HeartbeatHandler(::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Context*, ::dcsctp::TimerManager*);

    MCAPI ::webrtc::TimeDelta OnIntervalTimerExpiry();

    MCAPI ::webrtc::TimeDelta OnTimeoutTimerExpiry();

    MCAPI void RestartTimer();

    MCAPI ~HeartbeatHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Context*, ::dcsctp::TimerManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
