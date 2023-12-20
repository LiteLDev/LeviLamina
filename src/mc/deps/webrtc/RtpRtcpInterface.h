#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpRtcpInterface {
public:
    // RtpRtcpInterface inner types declare
    // clang-format off
    struct Configuration;
    struct NonSenderRttStats;
    struct SenderReportStats;
    // clang-format on

    // RtpRtcpInterface inner types define
    struct Configuration {
    public:
        // prevent constructor by default
        Configuration& operator=(Configuration const&);
        Configuration(Configuration const&);
        Configuration();

    public:
        // NOLINTBEGIN
        // symbol: ??1Configuration@RtpRtcpInterface@webrtc@@QEAA@XZ
        MCAPI ~Configuration();

        // NOLINTEND
    };

    struct NonSenderRttStats {
    public:
        // prevent constructor by default
        NonSenderRttStats& operator=(NonSenderRttStats const&);
        NonSenderRttStats(NonSenderRttStats const&);
        NonSenderRttStats();
    };

    struct SenderReportStats {
    public:
        // prevent constructor by default
        SenderReportStats& operator=(SenderReportStats const&);
        SenderReportStats(SenderReportStats const&);
        SenderReportStats();
    };

public:
    // prevent constructor by default
    RtpRtcpInterface& operator=(RtpRtcpInterface const&);
    RtpRtcpInterface(RtpRtcpInterface const&);
    RtpRtcpInterface();
};

}; // namespace webrtc
