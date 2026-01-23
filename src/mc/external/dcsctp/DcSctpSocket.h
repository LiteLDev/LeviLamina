#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/DcSctpSocketInterface.h"
#include "mc/external/dcsctp/ResetStreamsStatus.h"
#include "mc/external/dcsctp/SctpImplementation.h"
#include "mc/external/dcsctp/SctpPacket.h"
#include "mc/external/dcsctp/SendPacketStatus.h"
#include "mc/external/dcsctp/SendStatus.h"
#include "mc/external/dcsctp/SocketState.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class AnyDataChunk; }
namespace dcsctp { class AnyForwardTsnChunk; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { class SctpPacket; }
namespace dcsctp { class StateCookie; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct CommonHeader; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct Metrics; }
namespace dcsctp { struct SendOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class DcSctpSocket : public ::dcsctp::DcSctpSocketInterface {
public:
    // DcSctpSocket inner types declare
    // clang-format off
    struct ConnectParameters;
    // clang-format on

    // DcSctpSocket inner types define
    enum class State : int {
        KClosed           = 0,
        KCookieWait       = 1,
        KCookieEchoed     = 2,
        KEstablished      = 3,
        KShutdownPending  = 4,
        KShutdownSent     = 5,
        KShutdownReceived = 6,
        KShutdownAckSent  = 7,
    };

    struct ConnectParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkbb01ad;
        ::ll::UntypedStorage<4, 4> mUnkfabbf6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectParameters& operator=(ConnectParameters const&);
        ConnectParameters(ConnectParameters const&);
        ConnectParameters();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka66a8b;
    ::ll::UntypedStorage<8, 8>   mUnk143fb9;
    ::ll::UntypedStorage<8, 88>  mUnk62c28b;
    ::ll::UntypedStorage<8, 176> mUnk1a131d;
    ::ll::UntypedStorage<8, 48>  mUnkead560;
    ::ll::UntypedStorage<8, 88>  mUnkd2281a;
    ::ll::UntypedStorage<8, 8>   mUnkd97ab8;
    ::ll::UntypedStorage<8, 8>   mUnkf4f7e6;
    ::ll::UntypedStorage<8, 8>   mUnk6837e2;
    ::ll::UntypedStorage<8, 72>  mUnk8f8604;
    ::ll::UntypedStorage<8, 216> mUnk1c4c5d;
    ::ll::UntypedStorage<4, 8>   mUnk245a5b;
    ::ll::UntypedStorage<4, 4>   mUnk21a463;
    ::ll::UntypedStorage<8, 8>   mUnkf959f9;
    // NOLINTEND

public:
    // prevent constructor by default
    DcSctpSocket& operator=(DcSctpSocket const&);
    DcSctpSocket(DcSctpSocket const&);
    DcSctpSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void ReceivePacket(::rtc::ArrayView<uchar const> data) /*override*/;

    virtual void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id) /*override*/;

    virtual void Connect() /*override*/;

    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state) /*override*/;

    virtual void Shutdown() /*override*/;

    virtual void Close() /*override*/;

    virtual ::dcsctp::SendStatus
    Send(::dcsctp::DcSctpMessage message, ::dcsctp::SendOptions const& send_options) /*override*/;

    virtual ::std::vector<::dcsctp::SendStatus> SendMany(
        ::rtc::ArrayView<::dcsctp::DcSctpMessage> messages,
        ::dcsctp::SendOptions const&              send_options
    ) /*override*/;

    virtual ::dcsctp::ResetStreamsStatus ResetStreams(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    ) /*override*/;

    virtual ::dcsctp::SocketState state() const /*override*/;

    virtual ::dcsctp::DcSctpOptions const& options() const /*override*/;

    virtual void SetMaxMessageSize(uint64 max_message_size) /*override*/;

    virtual void SetStreamPriority(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>       stream_id,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority
    ) /*override*/;

    virtual ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
    GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const /*override*/;

    virtual uint64 buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const /*override*/;

    virtual uint64 buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const
        /*override*/;

    virtual void SetBufferedAmountLowThreshold(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id,
        uint64                                               bytes
    ) /*override*/;

    virtual ::std::optional<::dcsctp::Metrics> GetMetrics() const /*override*/;

    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const /*override*/;

    virtual ::std::optional<::dcsctp::DcSctpSocketHandoverState> GetHandoverStateAndClose() /*override*/;

    virtual ::dcsctp::SctpImplementation peer_implementation() const /*override*/;

    virtual ~DcSctpSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseConnectionBecauseOfTooManyTransmissionErrors();

    MCNAPI void CreateTransmissionControlBlock(
        ::dcsctp::Capabilities const&                             capabilities,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> my_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             my_initial_tsn,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> peer_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             peer_initial_tsn,
        uint64                                                    a_rwnd,
        ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>        tie_tag
    );

    MCNAPI DcSctpSocket(
        ::std::string_view                          log_prefix,
        ::dcsctp::DcSctpSocketCallbacks&            callbacks,
        ::std::unique_ptr<::dcsctp::PacketObserver> packet_observer,
        ::dcsctp::DcSctpOptions const&              options
    );

    MCNAPI bool Dispatch(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI void
    HandleAbort(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI void
    HandleCookieEcho(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI bool HandleCookieEchoWithTCB(::dcsctp::CommonHeader const& header, ::dcsctp::StateCookie const& cookie);

    MCNAPI void HandleDataCommon(::dcsctp::AnyDataChunk& chunk);

    MCNAPI void
    HandleError(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI void HandleForwardTsnCommon(::dcsctp::AnyForwardTsnChunk const& chunk);

    MCNAPI void
    HandleInit(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI void
    HandleInitAck(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI void
    HandleShutdownAck(::dcsctp::CommonHeader const& header, ::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI bool HandleUnrecognizedChunk(::dcsctp::SctpPacket::ChunkDescriptor const& descriptor);

    MCNAPI ::dcsctp::SendStatus
    InternalSend(::dcsctp::DcSctpMessage const& message, ::dcsctp::SendOptions const& send_options);

    MCNAPI void MaybeDeliverMessages();

    MCNAPI void MaybeSendResetStreamsRequest();

    MCNAPI void MaybeSendShutdownOrAck();

    MCNAPI ::webrtc::TimeDelta OnCookieTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnInitTimerExpiry();

    MCNAPI void OnSentPacket(::rtc::ArrayView<uchar const> packet, ::dcsctp::SendPacketStatus status);

    MCNAPI ::webrtc::TimeDelta OnShutdownTimerExpiry();

    MCNAPI void ReportFailedToParseChunk(int chunk_type);

    MCNAPI void SendInit();

    MCNAPI void SendShutdown();

    MCNAPI void SendShutdownAck();

    MCNAPI bool ValidatePacket(::dcsctp::SctpPacket const& packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view                          log_prefix,
        ::dcsctp::DcSctpSocketCallbacks&            callbacks,
        ::std::unique_ptr<::dcsctp::PacketObserver> packet_observer,
        ::dcsctp::DcSctpOptions const&              options
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ReceivePacket(::rtc::ArrayView<uchar const> data);

    MCNAPI void $HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id);

    MCNAPI void $Connect();

    MCNAPI void $RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI void $Shutdown();

    MCNAPI void $Close();

    MCNAPI ::dcsctp::SendStatus $Send(::dcsctp::DcSctpMessage message, ::dcsctp::SendOptions const& send_options);

    MCNAPI ::std::vector<::dcsctp::SendStatus>
    $SendMany(::rtc::ArrayView<::dcsctp::DcSctpMessage> messages, ::dcsctp::SendOptions const& send_options);

    MCNAPI ::dcsctp::ResetStreamsStatus
    $ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams);

    MCNAPI ::dcsctp::SocketState $state() const;

    MCNAPI ::dcsctp::DcSctpOptions const& $options() const;

    MCNAPI void $SetMaxMessageSize(uint64 max_message_size);

    MCNAPI void $SetStreamPriority(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>       stream_id,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority
    );

    MCNAPI ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
    $GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI uint64 $buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI uint64 $buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI void
    $SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, uint64 bytes);

    MCNAPI ::std::optional<::dcsctp::Metrics> $GetMetrics() const;

    MCNAPI ::dcsctp::HandoverReadinessStatus $GetHandoverReadiness() const;

    MCNAPI ::std::optional<::dcsctp::DcSctpSocketHandoverState> $GetHandoverStateAndClose();

    MCNAPI ::dcsctp::SctpImplementation $peer_implementation() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
