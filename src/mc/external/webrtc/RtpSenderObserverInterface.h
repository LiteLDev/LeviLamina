#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class RtpSenderObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnFirstPacketSent(::webrtc::MediaType) = 0;

    virtual ~RtpSenderObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
