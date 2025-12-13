#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class RTCError; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DataChannelTransportInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataChannelTransportInterface() = default;

    virtual ::webrtc::RTCError OpenChannel(int) = 0;

    virtual ::webrtc::RTCError SendData(int, ::webrtc::SendDataParams const&, ::rtc::CopyOnWriteBuffer const&) = 0;

    virtual ::webrtc::RTCError CloseChannel(int) = 0;

    virtual void SetDataSink(::webrtc::DataChannelSink*) = 0;

    virtual bool IsReadyToSend() const = 0;

    virtual uint64 buffered_amount(int) const = 0;

    virtual uint64 buffered_amount_low_threshold(int) const = 0;

    virtual void SetBufferedAmountLowThreshold(int, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
