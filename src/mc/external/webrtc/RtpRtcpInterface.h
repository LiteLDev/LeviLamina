#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpRtcpInterface {
public:
    // RtpRtcpInterface inner types declare
    // clang-format off
    struct Configuration;
    struct SenderReportStats;
    // clang-format on

    // RtpRtcpInterface inner types define
    struct Configuration {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Configuration();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SenderReportStats {};
};

} // namespace webrtc
