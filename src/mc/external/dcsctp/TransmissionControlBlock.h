#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Context.h"
#include "mc/external/dcsctp/SctpPacket.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class PacketSender; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class TransmissionControlBlock : public ::dcsctp::Context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk8051d0;
    ::ll::UntypedStorage<8, 176> mUnk75b839;
    ::ll::UntypedStorage<8, 8>   mUnkb3c359;
    ::ll::UntypedStorage<2, 8>   mUnk445cef;
    ::ll::UntypedStorage<8, 8>   mUnkfb8773;
    ::ll::UntypedStorage<8, 8>   mUnkaf661f;
    ::ll::UntypedStorage<8, 8>   mUnk846fb5;
    ::ll::UntypedStorage<4, 4>   mUnk675890;
    ::ll::UntypedStorage<4, 4>   mUnkcac7da;
    ::ll::UntypedStorage<4, 4>   mUnkb66298;
    ::ll::UntypedStorage<4, 4>   mUnk12976d;
    ::ll::UntypedStorage<8, 8>   mUnk4e9dcc;
    ::ll::UntypedStorage<8, 64>  mUnkd6727c;
    ::ll::UntypedStorage<8, 8>   mUnka4cca7;
    ::ll::UntypedStorage<8, 8>   mUnk9bd8c7;
    ::ll::UntypedStorage<8, 64>  mUnk36dbcb;
    ::ll::UntypedStorage<8, 32>  mUnka87ec1;
    ::ll::UntypedStorage<8, 104> mUnk704d04;
    ::ll::UntypedStorage<8, 168> mUnk6029a3;
    ::ll::UntypedStorage<8, 648> mUnk6b5332;
    ::ll::UntypedStorage<8, 144> mUnkcd60d6;
    ::ll::UntypedStorage<8, 64>  mUnkff1edb;
    ::ll::UntypedStorage<8, 40>  mUnkb664d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TransmissionControlBlock& operator=(TransmissionControlBlock const&);
    TransmissionControlBlock(TransmissionControlBlock const&);
    TransmissionControlBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool is_connection_established() const /*override*/;

    virtual ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> my_initial_tsn() const /*override*/;

    virtual ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> peer_initial_tsn() const /*override*/;

    virtual ::dcsctp::DcSctpSocketCallbacks& callbacks() const /*override*/;

    virtual void ObserveRTT(::webrtc::TimeDelta rtt) /*override*/;

    virtual ::webrtc::TimeDelta current_rto() const /*override*/;

    virtual bool IncrementTxErrorCounter(::std::string_view reason) /*override*/;

    virtual void ClearTxErrorCounter() /*override*/;

    virtual ::dcsctp::SctpPacket::Builder PacketBuilder() const /*override*/;

    virtual bool HasTooManyTxErrors() const /*override*/;

    virtual void Send(::dcsctp::SctpPacket::Builder& builder) /*override*/;

    virtual ~TransmissionControlBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI void ClearCookieEchoChunk();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void MaybeSendFastRetransmit();

    MCNAPI void MaybeSendSack();

    MCNAPI ::webrtc::TimeDelta OnDelayedAckTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnRtxTimerExpiry();

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI void SendBufferedPackets(::webrtc::Timestamp now);

    MCNAPI void SendBufferedPackets(::dcsctp::SctpPacket::Builder& builder, ::webrtc::Timestamp now);

    MCNAPI TransmissionControlBlock(
        ::dcsctp::TimerManager&                                   timer_manager,
        ::std::string_view                                        log_prefix,
        ::dcsctp::DcSctpOptions const&                            options,
        ::dcsctp::Capabilities const&                             capabilities,
        ::dcsctp::DcSctpSocketCallbacks&                          callbacks,
        ::dcsctp::SendQueue&                                      send_queue,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> my_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             my_initial_tsn,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> peer_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             peer_initial_tsn,
        uint64                                                    a_rwnd,
        ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>        tie_tag,
        ::dcsctp::PacketSender&                                   packet_sender,
        ::std::function<bool()>                                   is_connection_established
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dcsctp::TimerManager&                                   timer_manager,
        ::std::string_view                                        log_prefix,
        ::dcsctp::DcSctpOptions const&                            options,
        ::dcsctp::Capabilities const&                             capabilities,
        ::dcsctp::DcSctpSocketCallbacks&                          callbacks,
        ::dcsctp::SendQueue&                                      send_queue,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> my_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             my_initial_tsn,
        ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint> peer_verification_tag,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>             peer_initial_tsn,
        uint64                                                    a_rwnd,
        ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>        tie_tag,
        ::dcsctp::PacketSender&                                   packet_sender,
        ::std::function<bool()>                                   is_connection_established
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $is_connection_established() const;

    MCNAPI ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> $my_initial_tsn() const;

    MCNAPI ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> $peer_initial_tsn() const;

    MCNAPI ::dcsctp::DcSctpSocketCallbacks& $callbacks() const;

    MCNAPI void $ObserveRTT(::webrtc::TimeDelta rtt);

    MCNAPI ::webrtc::TimeDelta $current_rto() const;

    MCNAPI bool $IncrementTxErrorCounter(::std::string_view reason);

    MCNAPI void $ClearTxErrorCounter();

    MCNAPI ::dcsctp::SctpPacket::Builder $PacketBuilder() const;

    MCNAPI bool $HasTooManyTxErrors() const;

    MCNAPI void $Send(::dcsctp::SctpPacket::Builder& builder);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
