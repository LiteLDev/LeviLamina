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
    // vIndex: 0
    virtual ~DataChannelTransportInterface() = default;

    // vIndex: 1
    virtual ::webrtc::RTCError OpenChannel(int) = 0;

    // vIndex: 2
    virtual ::webrtc::RTCError SendData(int, ::webrtc::SendDataParams const&, ::rtc::CopyOnWriteBuffer const&) = 0;

    // vIndex: 3
    virtual ::webrtc::RTCError CloseChannel(int) = 0;

    // vIndex: 4
    virtual void SetDataSink(::webrtc::DataChannelSink*) = 0;

    // vIndex: 5
    virtual bool IsReadyToSend() const = 0;

    // vIndex: 6
    virtual uint64 buffered_amount(int) const = 0;

    // vIndex: 7
    virtual uint64 buffered_amount_low_threshold(int) const = 0;

    // vIndex: 8
    virtual void SetBufferedAmountLowThreshold(int, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
