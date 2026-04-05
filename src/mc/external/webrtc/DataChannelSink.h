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

    virtual void
    OnDataReceived(int channel_id, ::webrtc::DataMessageType type, ::rtc::CopyOnWriteBuffer const& buffer) = 0;

    virtual void OnChannelClosing(int channel_id) = 0;

    virtual void OnChannelClosed(int channel_id) = 0;

    virtual void OnReadyToSend() = 0;

    virtual void OnTransportClosed(::webrtc::RTCError error);

    virtual void OnBufferedAmountLow(int channel_id) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
