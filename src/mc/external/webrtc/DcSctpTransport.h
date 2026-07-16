#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/DcSctpSocketCallbacks.h"
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/SendPacketStatus.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/SctpTransportInternal.h"
#include "mc/external/webrtc/StrongAlias.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketFactory; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class Environment; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class PriorityValue; }
namespace webrtc { class RTCError; }
namespace webrtc { class Thread; }
namespace webrtc { struct SctpOptions; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class DcSctpTransport : public ::webrtc::SctpTransportInternal,
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
        ::ll::UntypedStorage<2, 2> mUnk30c537;
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
    ::ll::UntypedStorage<8, 8>   mUnk980806;
    ::ll::UntypedStorage<8, 8>   mUnk3c1abc;
    ::ll::UntypedStorage<8, 40>  mUnkfd1df4;
    ::ll::UntypedStorage<8, 8>   mUnk762537;
    ::ll::UntypedStorage<8, 8>   mUnk79c566;
    ::ll::UntypedStorage<8, 144> mUnkd82ce7;
    ::ll::UntypedStorage<8, 8>   mUnk9919e4;
    ::ll::UntypedStorage<8, 32>  mUnk3df8c5;
    ::ll::UntypedStorage<8, 24>  mUnkfc8cc6;
    ::ll::UntypedStorage<8, 32>  mUnk593933;
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

    virtual void SetDtlsTransport(::webrtc::DtlsTransportInternal* transport) /*override*/;

    virtual bool Start(::webrtc::SctpOptions const& options) /*override*/;

    virtual bool OpenStream(int sid, ::webrtc::PriorityValue priority) /*override*/;

    virtual bool ResetStream(int sid) /*override*/;

    virtual ::webrtc::RTCError
    SendData(int sid, ::webrtc::SendDataParams const& params, ::webrtc::CopyOnWriteBuffer const& payload) /*override*/;

    virtual bool ReadyToSendData() /*override*/;

    virtual int max_message_size() const /*override*/;

    virtual ::std::optional<int> max_outbound_streams() const /*override*/;

    virtual ::std::optional<int> max_inbound_streams() const /*override*/;

    virtual uint64 buffered_amount(int sid) const /*override*/;

    virtual uint64 buffered_amount_low_threshold(int sid) const /*override*/;

    virtual void SetBufferedAmountLowThreshold(int sid, uint64 bytes) /*override*/;

    virtual void set_debug_name_for_testing(char const* debug_name) /*override*/;

    virtual ::dcsctp::SendPacketStatus
    SendPacketWithStatus(::webrtc::ArrayView<uchar const, 18446744073709546905> data) /*override*/;

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
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
                           outgoing_streams,
        ::std::string_view reason
    ) /*override*/;

    virtual void OnStreamsResetPerformed(
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
            outgoing_streams
    ) /*override*/;

    virtual void OnIncomingStreamsReset(
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
            incoming_streams
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectTransportSignals();

    MCNAPI DcSctpTransport(
        ::webrtc::Environment const&     env,
        ::webrtc::Thread*                network_thread,
        ::webrtc::DtlsTransportInternal* transport
    );

    MCNAPI DcSctpTransport(
        ::webrtc::Environment const&                     env,
        ::webrtc::Thread*                                network_thread,
        ::webrtc::DtlsTransportInternal*                 transport,
        ::std::unique_ptr<::dcsctp::DcSctpSocketFactory> socket_factory
    );

    MCNAPI void MaybeConnectSocket();

    MCNAPI void OnTransportWritableState(::webrtc::PacketTransportInternal* transport);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&     env,
        ::webrtc::Thread*                network_thread,
        ::webrtc::DtlsTransportInternal* transport
    );

    MCNAPI void* $ctor(
        ::webrtc::Environment const&                     env,
        ::webrtc::Thread*                                network_thread,
        ::webrtc::DtlsTransportInternal*                 transport,
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

    MCNAPI void $SetDtlsTransport(::webrtc::DtlsTransportInternal* transport);

    MCNAPI bool $Start(::webrtc::SctpOptions const& options);

    MCNAPI bool $OpenStream(int sid, ::webrtc::PriorityValue priority);

    MCNAPI bool $ResetStream(int sid);

    MCNAPI ::webrtc::RTCError
    $SendData(int sid, ::webrtc::SendDataParams const& params, ::webrtc::CopyOnWriteBuffer const& payload);

    MCNAPI bool $ReadyToSendData();

    MCNAPI int $max_message_size() const;

    MCNAPI ::std::optional<int> $max_outbound_streams() const;

    MCNAPI ::std::optional<int> $max_inbound_streams() const;

    MCNAPI uint64 $buffered_amount(int sid) const;

    MCNAPI uint64 $buffered_amount_low_threshold(int sid) const;

    MCNAPI void $SetBufferedAmountLowThreshold(int sid, uint64 bytes);

    MCNAPI void $set_debug_name_for_testing(char const* debug_name);

    MCNAPI ::dcsctp::SendPacketStatus
    $SendPacketWithStatus(::webrtc::ArrayView<uchar const, 18446744073709546905> data);

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
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
                           outgoing_streams,
        ::std::string_view reason
    );

    MCNAPI void $OnStreamsResetPerformed(
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
            outgoing_streams
    );

    MCNAPI void $OnIncomingStreamsReset(
        ::webrtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const, 18446744073709546905>
            incoming_streams
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForDcSctpSocketCallbacks();

    MCNAPI static void** $vftableForSctpTransportInternal();
    // NOLINTEND
};

} // namespace webrtc
