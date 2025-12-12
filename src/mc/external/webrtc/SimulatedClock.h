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

class SimulatedClock : public ::webrtc::Clock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8ff226;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulatedClock& operator=(SimulatedClock const&);
    SimulatedClock(SimulatedClock const&);
    SimulatedClock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimulatedClock() /*override*/ = default;

    virtual ::webrtc::Timestamp CurrentTime() /*override*/;

    virtual ::webrtc::NtpTime ConvertTimestampToNtpTime(::webrtc::Timestamp) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
