#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpRtcpInterface {
public:
    // RtpRtcpInterface inner types declare
    // clang-format off
    struct Configuration;
    struct NonSenderRttStats;
    struct SenderReportStats;
    // clang-format on

    // RtpRtcpInterface inner types define
    struct Configuration {};

    struct NonSenderRttStats {};

    struct SenderReportStats {};
};

} // namespace webrtc
