#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataMessageType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class DataChannelSink {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataChannelSink() = default;

    virtual void OnDataReceived(int, ::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&) = 0;

    virtual void OnChannelClosing(int) = 0;

    virtual void OnChannelClosed(int) = 0;

    virtual void OnReadyToSend() = 0;

    virtual void OnTransportClosed(::webrtc::RTCError);

    virtual void OnBufferedAmountLow(int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
