#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/SctpTransportInternal.h"
#include "mc/external/dcsctp/DcSctpSocketCallbacks.h"
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/SendPacketStatus.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/StrongAlias.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketFactory; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class Environment; }
namespace webrtc { class RTCError; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DcSctpTransport : public ::cricket::SctpTransportInternal,
                        public ::dcsctp::DcSctpSocketCallbacks,
                        public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // DcSctpTransport inner types declare
    // clang-format off
    struct StreamState;
    // clang-format on

    // DcSctpTransport inner types define
    struct StreamState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk26154d;
        ::ll::UntypedStorage<1, 1> mUnk5f7218;
        ::ll::UntypedStorage<1, 1> mUnkf702b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamState& operator=(StreamState const&);
        StreamState(StreamState const&);
        StreamState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc96c40;
    ::ll::UntypedStorage<8, 8>   mUnk2ddb50;
    ::ll::UntypedStorage<8, 40>  mUnkfd1df4;
    ::ll::UntypedStorage<8, 8>   mUnk762537;
    ::ll::UntypedStorage<8, 8>   mUnk671836;
    ::ll::UntypedStorage<8, 144> mUnkd82ce7;
    ::ll::UntypedStorage<8, 8>   mUnke23dd9;
    ::ll::UntypedStorage<8, 32>  mUnkec43f2;
    ::ll::UntypedStorage<8, 24>  mUnk36cd1e;
    ::ll::UntypedStorage<8, 32>  mUnkdb3c39;
    ::ll::UntypedStorage<1, 1>   mUnk5ac068;
    ::ll::UntypedStorage<8, 64>  mUnk7d9b32;
    ::ll::UntypedStorage<8, 8>   mUnk45130c;
    // NOLINTEND

public:
    // prevent constructor by default
    DcSctpTransport& operator=(DcSctpTransport const&);
    DcSctpTransport(DcSctpTransport const&);
    DcSctpTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DcSctpTransport() /*override*/;

    virtual void SetOnConnectedCallback(::std::function<void()> callback) /*override*/;

    virtual void SetDataChannelSink(::webrtc::DataChannelSink* sink) /*override*/;

    virtual void SetDtlsTransport(::rtc::PacketTransportInternal* transport) /*override*/;

    virtual bool Start(int local_sctp_port, int remote_sctp_port, int max_message_size) /*override*/;

    virtual bool OpenStream(int sid) /*override*/;

    virtual bool ResetStream(int sid) /*override*/;

    virtual ::webrtc::RTCError
    SendData(int sid, ::webrtc::SendDataParams const& params, ::rtc::CopyOnWriteBuffer const& payload) /*override*/;

    virtual bool ReadyToSendData() /*override*/;

    virtual int max_message_size() const /*override*/;

    virtual ::std::optional<int> max_outbound_streams() const /*override*/;

    virtual ::std::optional<int> max_inbound_streams() const /*override*/;

    virtual uint64 buffered_amount(int sid) const /*override*/;

    virtual uint64 buffered_amount_low_threshold(int sid) const /*override*/;

    virtual void SetBufferedAmountLowThreshold(int sid, uint64 bytes) /*override*/;

    virtual void set_debug_name_for_testing(char const* debug_name) /*override*/;

    virtual ::dcsctp::SendPacketStatus SendPacketWithStatus(::rtc::ArrayView<uchar const> data) /*override*/;

    virtual ::std::unique_ptr<::dcsctp::Timeout>
    CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision) /*override*/;

    virtual ::dcsctp::TimeMs TimeMillis() /*override*/;

    virtual uint GetRandomInt(uint low, uint high) /*override*/;

    virtual void OnTotalBufferedAmountLow() /*override*/;

    virtual void OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) /*override*/;

    virtual void OnMessageReceived(::dcsctp::DcSctpMessage message) /*override*/;

    virtual void OnError(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    virtual void OnAborted(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    virtual void OnConnected() /*override*/;

    virtual void OnClosed() /*override*/;

    virtual void OnConnectionRestarted() /*override*/;

    virtual void OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams,
        ::std::string_view                                                           reason
    ) /*override*/;

    virtual void OnStreamsResetPerformed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    ) /*override*/;

    virtual void OnIncomingStreamsReset(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> incoming_streams
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectTransportSignals();

    MCNAPI DcSctpTransport(
        ::webrtc::Environment const&    env,
        ::rtc::Thread*                  network_thread,
        ::rtc::PacketTransportInternal* transport
    );

    MCNAPI DcSctpTransport(
        ::webrtc::Environment const&                     env,
        ::rtc::Thread*                                   network_thread,
        ::rtc::PacketTransportInternal*                  transport,
        ::std::unique_ptr<::dcsctp::DcSctpSocketFactory> socket_factory
    );

    MCNAPI void DisconnectTransportSignals();

    MCNAPI void MaybeConnectSocket();

    MCNAPI void OnTransportReadPacket(::rtc::PacketTransportInternal* transport, ::rtc::ReceivedPacket const& packet);

    MCNAPI void OnTransportWritableState(::rtc::PacketTransportInternal* transport);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::Environment const& env, ::rtc::Thread* network_thread, ::rtc::PacketTransportInternal* transport);

    MCNAPI void* $ctor(
        ::webrtc::Environment const&                     env,
        ::rtc::Thread*                                   network_thread,
        ::rtc::PacketTransportInternal*                  transport,
        ::std::unique_ptr<::dcsctp::DcSctpSocketFactory> socket_factory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetOnConnectedCallback(::std::function<void()> callback);

    MCNAPI void $SetDataChannelSink(::webrtc::DataChannelSink* sink);

    MCNAPI void $SetDtlsTransport(::rtc::PacketTransportInternal* transport);

    MCNAPI bool $Start(int local_sctp_port, int remote_sctp_port, int max_message_size);

    MCNAPI bool $OpenStream(int sid);

    MCNAPI bool $ResetStream(int sid);

    MCNAPI ::webrtc::RTCError
    $SendData(int sid, ::webrtc::SendDataParams const& params, ::rtc::CopyOnWriteBuffer const& payload);

    MCNAPI bool $ReadyToSendData();

    MCNAPI int $max_message_size() const;

    MCNAPI ::std::optional<int> $max_outbound_streams() const;

    MCNAPI ::std::optional<int> $max_inbound_streams() const;

    MCNAPI uint64 $buffered_amount(int sid) const;

    MCNAPI uint64 $buffered_amount_low_threshold(int sid) const;

    MCNAPI void $SetBufferedAmountLowThreshold(int sid, uint64 bytes);

    MCNAPI void $set_debug_name_for_testing(char const* debug_name);

    MCNAPI ::dcsctp::SendPacketStatus $SendPacketWithStatus(::rtc::ArrayView<uchar const> data);

    MCNAPI ::std::unique_ptr<::dcsctp::Timeout> $CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision);

    MCNAPI ::dcsctp::TimeMs $TimeMillis();

    MCNAPI uint $GetRandomInt(uint low, uint high);

    MCNAPI void $OnTotalBufferedAmountLow();

    MCNAPI void $OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI void $OnMessageReceived(::dcsctp::DcSctpMessage message);

    MCNAPI void $OnError(::dcsctp::ErrorKind error, ::std::string_view message);

    MCNAPI void $OnAborted(::dcsctp::ErrorKind error, ::std::string_view message);

    MCNAPI void $OnConnected();

    MCNAPI void $OnClosed();

    MCNAPI void $OnConnectionRestarted();

    MCNAPI void $OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams,
        ::std::string_view                                                           reason
    );

    MCNAPI void $OnStreamsResetPerformed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    );

    MCNAPI void $OnIncomingStreamsReset(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> incoming_streams
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForSctpTransportInternal();

    MCNAPI static void** $vftableForDcSctpSocketCallbacks();
    // NOLINTEND
};

} // namespace webrtc
