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
    virtual ::webrtc::RTCError SendData(
        ::webrtc::StreamId              sid,
        ::webrtc::SendDataParams const& params,
        ::rtc::CopyOnWriteBuffer const& payload
    ) = 0;

    virtual void AddSctpDataStream(::webrtc::StreamId sid) = 0;

    virtual void RemoveSctpDataStream(::webrtc::StreamId sid) = 0;

    virtual void
    OnChannelStateChanged(::webrtc::SctpDataChannel* channel, ::webrtc::DataChannelInterface::DataState state) = 0;

    virtual uint64 buffered_amount(::webrtc::StreamId sid) const = 0;

    virtual uint64 buffered_amount_low_threshold(::webrtc::StreamId sid) const = 0;

    virtual void SetBufferedAmountLowThreshold(::webrtc::StreamId sid, uint64 bytes) = 0;

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
