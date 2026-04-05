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

    virtual void SetOnConnectedCallback(::std::function<void()> callback) = 0;

    virtual void SetDataChannelSink(::webrtc::DataChannelSink* sink) = 0;

    virtual void SetDtlsTransport(::rtc::PacketTransportInternal* transport) = 0;

    virtual bool Start(int local_sctp_port, int remote_sctp_port, int max_message_size) = 0;

    virtual bool OpenStream(int sid) = 0;

    virtual bool ResetStream(int sid) = 0;

    virtual ::webrtc::RTCError
    SendData(int sid, ::webrtc::SendDataParams const& params, ::rtc::CopyOnWriteBuffer const& payload) = 0;

    virtual bool ReadyToSendData() = 0;

    virtual int max_message_size() const = 0;

    virtual ::std::optional<int> max_outbound_streams() const = 0;

    virtual ::std::optional<int> max_inbound_streams() const = 0;

    virtual uint64 buffered_amount(int sid) const = 0;

    virtual uint64 buffered_amount_low_threshold(int sid) const = 0;

    virtual void SetBufferedAmountLowThreshold(int sid, uint64 bytes) = 0;

    virtual void set_debug_name_for_testing(char const* debug_name) = 0;
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
