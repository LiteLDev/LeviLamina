#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LossNotificationSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LossNotificationSender() = default;

    virtual void SendLossNotification(ushort, ushort, bool, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
