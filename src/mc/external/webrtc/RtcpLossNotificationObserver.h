#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpLossNotificationObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpLossNotificationObserver() = default;

    virtual void OnReceivedLossNotification(uint, ushort, ushort, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
