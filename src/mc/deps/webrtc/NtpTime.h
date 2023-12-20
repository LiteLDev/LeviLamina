#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NtpTime {
public:
    // prevent constructor by default
    NtpTime& operator=(NtpTime const&);
    NtpTime(NtpTime const&);
    NtpTime();
};

}; // namespace webrtc
