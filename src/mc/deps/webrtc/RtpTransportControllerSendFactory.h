#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransportControllerSendFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class RtpTransportControllerSendFactoryInterface; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { struct RtpTransportConfig; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSendFactory : public ::webrtc::RtpTransportControllerSendFactoryInterface {
public:
    // prevent constructor by default
    RtpTransportControllerSendFactory& operator=(RtpTransportControllerSendFactory const&);
    RtpTransportControllerSendFactory(RtpTransportControllerSendFactory const&);
    RtpTransportControllerSendFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?Create@RtpTransportControllerSendFactory@webrtc@@UEAA?AV?$unique_ptr@VRtpTransportControllerSendInterface@webrtc@@U?$default_delete@VRtpTransportControllerSendInterface@webrtc@@@std@@@std@@AEBURtpTransportConfig@2@PEAVClock@2@@Z
    virtual std::unique_ptr<class webrtc::RtpTransportControllerSendInterface>
    Create(struct webrtc::RtpTransportConfig const&, class webrtc::Clock*);

    // vIndex: 1, symbol: __gen_??1RtpTransportControllerSendFactory@webrtc@@UEAA@XZ
    virtual ~RtpTransportControllerSendFactory() = default;

    // NOLINTEND
};

}; // namespace webrtc
