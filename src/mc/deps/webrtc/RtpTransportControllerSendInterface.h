#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpTransportControllerSendInterface {
public:
    // prevent constructor by default
    RtpTransportControllerSendInterface& operator=(RtpTransportControllerSendInterface const&);
    RtpTransportControllerSendInterface(RtpTransportControllerSendInterface const&);
    RtpTransportControllerSendInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpTransportControllerSendInterface@webrtc@@UEAA@XZ
    virtual ~RtpTransportControllerSendInterface();

    // NOLINTEND
};

}; // namespace webrtc
