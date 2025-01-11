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
    // member functions
    // NOLINTBEGIN
    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI void ClearCookieEchoChunk();

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI void MaybeSendFastRetransmit();

    MCAPI void MaybeSendForwardTsn(::dcsctp::SctpPacket::Builder&, ::webrtc::Timestamp);

    MCAPI void MaybeSendSack();

    MCAPI ::webrtc::TimeDelta OnDelayedAckTimerExpiry();

    MCAPI ::webrtc::TimeDelta OnRtxTimerExpiry();

    MCAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCAPI void SendBufferedPackets(::webrtc::Timestamp);

    MCAPI void SendBufferedPackets(::dcsctp::SctpPacket::Builder&, ::webrtc::Timestamp);

    MCAPI TransmissionControlBlock(::dcsctp::TimerManager&, ::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Capabilities const&, ::dcsctp::DcSctpSocketCallbacks&, ::dcsctp::SendQueue&, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint64, ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>, ::dcsctp::PacketSender&, ::std::function<bool()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::dcsctp::TimerManager&, ::std::string_view, ::dcsctp::DcSctpOptions const&, ::dcsctp::Capabilities const&, ::dcsctp::DcSctpSocketCallbacks&, ::dcsctp::SendQueue&, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::VerificationTagTag, uint>, ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint64, ::webrtc::StrongAlias<::dcsctp::TieTagTag, uint64>, ::dcsctp::PacketSender&, ::std::function<bool()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
