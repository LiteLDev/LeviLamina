#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpLossNotificationObserver {
public:
    // prevent constructor by default
    RtcpLossNotificationObserver& operator=(RtcpLossNotificationObserver const&);
    RtcpLossNotificationObserver(RtcpLossNotificationObserver const&);
    RtcpLossNotificationObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpLossNotificationObserver() = default;

    // vIndex: 1
    virtual void OnReceivedLossNotification(uint, ushort, ushort, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
