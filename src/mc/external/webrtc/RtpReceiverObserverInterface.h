#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"

namespace webrtc {

class RtpReceiverObserverInterface {
public:
    // prevent constructor by default
    RtpReceiverObserverInterface& operator=(RtpReceiverObserverInterface const&);
    RtpReceiverObserverInterface(RtpReceiverObserverInterface const&);
    RtpReceiverObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnFirstPacketReceived(::cricket::MediaType) = 0;

    // vIndex: 1
    virtual ~RtpReceiverObserverInterface() = default;
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
