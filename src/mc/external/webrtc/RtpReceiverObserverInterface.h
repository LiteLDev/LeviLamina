#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class RtpReceiverObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnFirstPacketReceived(::webrtc::MediaType) = 0;

    virtual ~RtpReceiverObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
