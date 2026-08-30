#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpLossNotificationObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpLossNotificationObserver();

    virtual void OnReceivedLossNotification(uint, ushort, ushort, bool) = 0;
    // NOLINTEND
};

} // namespace webrtc
