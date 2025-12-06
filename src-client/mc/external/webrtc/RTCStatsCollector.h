#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTCStatsCollector {
public:
    // RTCStatsCollector inner types declare
    // clang-format off
    struct CertificateStatsPair;
    struct InternalRecord;
    struct RequestInfo;
    struct RtpTransceiverStatsInfo;
    // clang-format on

    // RTCStatsCollector inner types define
    struct CertificateStatsPair {};

    struct InternalRecord {};

    struct RequestInfo {
    public:
        // RequestInfo inner types define
        enum class FilterMode : uint {};
    };

    struct RtpTransceiverStatsInfo {};
};

} // namespace webrtc
