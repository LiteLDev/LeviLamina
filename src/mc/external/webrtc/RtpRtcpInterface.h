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
        // prevent constructor by default
        Configuration& operator=(Configuration const&);
        Configuration(Configuration const&);
        Configuration();

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

} // namespace webrtc
