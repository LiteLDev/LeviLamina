#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class RTCError; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace cricket {

class SctpTransportInternal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SctpTransportInternal();

    virtual void SetOnConnectedCallback(::std::function<void()>) = 0;

    virtual void SetDataChannelSink(::webrtc::DataChannelSink*) = 0;

    virtual void SetDtlsTransport(::rtc::PacketTransportInternal*) = 0;

    virtual bool Start(int, int, int) = 0;

    virtual bool OpenStream(int) = 0;

    virtual bool ResetStream(int) = 0;

    virtual ::webrtc::RTCError SendData(int, ::webrtc::SendDataParams const&, ::rtc::CopyOnWriteBuffer const&) = 0;

    virtual bool ReadyToSendData() = 0;

    virtual int max_message_size() const = 0;

    virtual ::std::optional<int> max_outbound_streams() const = 0;

    virtual ::std::optional<int> max_inbound_streams() const = 0;

    virtual uint64 buffered_amount(int) const = 0;

    virtual uint64 buffered_amount_low_threshold(int) const = 0;

    virtual void SetBufferedAmountLowThreshold(int, uint64) = 0;

    virtual void set_debug_name_for_testing(char const*) = 0;
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

} // namespace cricket
