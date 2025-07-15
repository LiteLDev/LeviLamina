#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataChannelInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class StreamId; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class SctpDataChannelControllerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::webrtc::RTCError
    SendData(::webrtc::StreamId, ::webrtc::SendDataParams const&, ::rtc::CopyOnWriteBuffer const&) = 0;

    // vIndex: 1
    virtual void AddSctpDataStream(::webrtc::StreamId) = 0;

    // vIndex: 2
    virtual void RemoveSctpDataStream(::webrtc::StreamId) = 0;

    // vIndex: 3
    virtual void OnChannelStateChanged(::webrtc::SctpDataChannel*, ::webrtc::DataChannelInterface::DataState) = 0;

    // vIndex: 4
    virtual uint64 buffered_amount(::webrtc::StreamId) const = 0;

    // vIndex: 5
    virtual uint64 buffered_amount_low_threshold(::webrtc::StreamId) const = 0;

    // vIndex: 6
    virtual void SetBufferedAmountLowThreshold(::webrtc::StreamId, uint64) = 0;

    // vIndex: 7
    virtual ~SctpDataChannelControllerInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
