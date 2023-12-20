#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace webrtc {

class RtpReceiverInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    RtpReceiverInterface& operator=(RtpReceiverInterface const&);
    RtpReceiverInterface(RtpReceiverInterface const&);
    RtpReceiverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: __gen_??1RtpReceiverInterface@webrtc@@UEAA@XZ
    virtual ~RtpReceiverInterface() = default;

    // symbol: ?SetParameters@RtpReceiverInterface@webrtc@@UEAA_NAEBURtpParameters@2@@Z
    MCVAPI bool SetParameters(struct webrtc::RtpParameters const&);

    // NOLINTEND
};

}; // namespace webrtc
