#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class TimeoutTag; }
// clang-format on

namespace dcsctp {

class Timeout {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Timeout() = default;

    // vIndex: 1
    virtual void Start(::dcsctp::DurationMs, ::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64>) = 0;

    // vIndex: 2
    virtual void Stop() = 0;

    // vIndex: 3
    virtual void Restart(::dcsctp::DurationMs duration, ::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Restart(::dcsctp::DurationMs duration, ::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id);
    // NOLINTEND

};

}
