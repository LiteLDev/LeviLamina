#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { struct RtpTransportConfig; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSendFactoryInterface {
public:
    // prevent constructor by default
    RtpTransportControllerSendFactoryInterface& operator=(RtpTransportControllerSendFactoryInterface const&);
    RtpTransportControllerSendFactoryInterface(RtpTransportControllerSendFactoryInterface const&);
    RtpTransportControllerSendFactoryInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?Create@RtpTransportControllerSendFactory@webrtc@@UEAA?AV?$unique_ptr@VRtpTransportControllerSendInterface@webrtc@@U?$default_delete@VRtpTransportControllerSendInterface@webrtc@@@std@@@std@@AEBURtpTransportConfig@2@PEAVClock@2@@Z
    virtual std::unique_ptr<class webrtc::RtpTransportControllerSendInterface>
    Create(struct webrtc::RtpTransportConfig const&, class webrtc::Clock*) = 0;

    // vIndex: 1, symbol: __gen_??1RtpTransportControllerSendFactoryInterface@webrtc@@UEAA@XZ
    virtual ~RtpTransportControllerSendFactoryInterface() = default;

    // NOLINTEND
};

}; // namespace webrtc
