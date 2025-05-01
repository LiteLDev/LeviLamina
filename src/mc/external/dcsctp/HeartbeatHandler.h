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
    // member functions
    // NOLINTBEGIN
    MCNAPI void HandleHeartbeatAck(::dcsctp::HeartbeatAckChunk);

    MCNAPI void HandleHeartbeatRequest(::dcsctp::HeartbeatRequestChunk);

    MCNAPI
    HeartbeatHandler(::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Context*, ::dcsctp::TimerManager*);

    MCNAPI ::webrtc::TimeDelta OnIntervalTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnTimeoutTimerExpiry();

    MCNAPI void RestartTimer();

    MCNAPI ~HeartbeatHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Context*, ::dcsctp::TimerManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
