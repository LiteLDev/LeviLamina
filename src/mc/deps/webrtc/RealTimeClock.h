#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Clock.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class NtpTime; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RealTimeClock : public ::webrtc::Clock {
public:
    // prevent constructor by default
    RealTimeClock& operator=(RealTimeClock const&);
    RealTimeClock(RealTimeClock const&);
    RealTimeClock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RealTimeClock@webrtc@@UEAA@XZ
    virtual ~RealTimeClock() = default;

    // vIndex: 1, symbol: ?CurrentTime@RealTimeClock@webrtc@@UEAA?AVTimestamp@2@XZ
    virtual class webrtc::Timestamp CurrentTime();

    // vIndex: 2, symbol: ?ConvertTimestampToNtpTime@RealTimeClock@webrtc@@UEAA?AVNtpTime@2@VTimestamp@2@@Z
    virtual class webrtc::NtpTime ConvertTimestampToNtpTime(class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
