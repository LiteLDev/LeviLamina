#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpSenderInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpSenderInternal : public ::webrtc::RtpSenderInterface {
public:
    // prevent constructor by default
    RtpSenderInternal& operator=(RtpSenderInternal const&);
    RtpSenderInternal(RtpSenderInternal const&);
    RtpSenderInternal();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1RtpSenderInternal@webrtc@@UEAA@XZ
    virtual ~RtpSenderInternal();

    // symbol: ?CheckSVCParameters@RtpSenderInternal@webrtc@@UEAA?AVRTCError@2@AEBURtpParameters@2@@Z
    MCVAPI class webrtc::RTCError CheckSVCParameters(struct webrtc::RtpParameters const&);

    // NOLINTEND
};

}; // namespace webrtc
