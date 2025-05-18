#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class TransmissionControlBlock {
public:
    // prevent constructor by default
    TransmissionControlBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI void ClearCookieEchoChunk();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void MaybeSendFastRetransmit();

    MCNAPI void MaybeSendForwardTsn(::dcsctp::SctpPacket::Builder&, ::webrtc::Timestamp);

    MCNAPI void MaybeSendSack();

    MCNAPI ::webrtc::TimeDelta OnDelayedAckTimerExpiry();

    MCNAPI ::webrtc::TimeDelta OnRtxTimerExpiry();

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCNAPI void SendBufferedPackets(::webrtc::Timestamp);

    MCNAPI void SendBufferedPackets(::dcsctp::SctpPacket::Builder&, ::webrtc::Timestamp);

    MCNAPI TransmissionControlBlock(::dcsctp::TimerManager&, ::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Capabilities const&, ::dcsctp::DcSctpSocketCallbacks&, ::dcsctp::SendQueue&, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint64, ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>, ::dcsctp::PacketSender&, ::std::function<bool()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::TimerManager&, ::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Capabilities const&, ::dcsctp::DcSctpSocketCallbacks&, ::dcsctp::SendQueue&, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint64, ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>, ::dcsctp::PacketSender&, ::std::function<bool()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
