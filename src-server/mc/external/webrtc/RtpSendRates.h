#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSendRates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7d8ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSendRates& operator=(RtpSendRates const&);
    RtpSendRates(RtpSendRates const&);
    RtpSendRates();
};

} // namespace webrtc
