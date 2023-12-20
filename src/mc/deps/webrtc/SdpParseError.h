#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpParseError {
public:
    // prevent constructor by default
    SdpParseError& operator=(SdpParseError const&);
    SdpParseError(SdpParseError const&);
    SdpParseError();

public:
    // NOLINTBEGIN
    // symbol: ??1SdpParseError@webrtc@@QEAA@XZ
    MCAPI ~SdpParseError();

    // NOLINTEND
};

}; // namespace webrtc
