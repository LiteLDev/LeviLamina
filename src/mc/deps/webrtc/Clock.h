#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NtpTime; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class Clock {
public:
    // prevent constructor by default
    Clock& operator=(Clock const&);
    Clock(Clock const&);
    Clock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Clock@webrtc@@UEAA@XZ
    virtual ~Clock() = default;

    // vIndex: 1, symbol: ?CurrentTime@RealTimeClock@webrtc@@UEAA?AVTimestamp@2@XZ
    virtual class webrtc::Timestamp CurrentTime() = 0;

    // vIndex: 2, symbol: ?ConvertTimestampToNtpTime@RealTimeClock@webrtc@@UEAA?AVNtpTime@2@VTimestamp@2@@Z
    virtual class webrtc::NtpTime ConvertTimestampToNtpTime(class webrtc::Timestamp) = 0;

    // symbol: ?TimeInMilliseconds@Clock@webrtc@@QEAA_JXZ
    MCAPI int64 TimeInMilliseconds();

    // symbol: ?GetRealTimeClock@Clock@webrtc@@SAPEAV12@XZ
    MCAPI static class webrtc::Clock* GetRealTimeClock();

    // NOLINTEND
};

}; // namespace webrtc
