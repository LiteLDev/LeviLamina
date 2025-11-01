#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LossNotificationSender {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LossNotificationSender() = default;

    // vIndex: 1
    virtual void SendLossNotification(ushort, ushort, bool, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
