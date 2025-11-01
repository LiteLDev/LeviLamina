#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Clock.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NtpTime; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RealTimeClock : public ::webrtc::Clock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::webrtc::Timestamp CurrentTime() /*override*/;

    // vIndex: 2
    virtual ::webrtc::NtpTime ConvertTimestampToNtpTime(::webrtc::Timestamp timestamp) /*override*/;

    // vIndex: 0
    virtual ~RealTimeClock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::Timestamp $CurrentTime();

    MCNAPI ::webrtc::NtpTime $ConvertTimestampToNtpTime(::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
