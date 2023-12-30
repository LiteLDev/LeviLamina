#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/dcsctp/Context.h"
#include "mc/deps/webrtc/dcsctp/SctpPacket.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Context; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class PacketSender; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class TransmissionControlBlock : public ::dcsctp::Context {
public:
    // prevent constructor by default
    TransmissionControlBlock& operator=(TransmissionControlBlock const&);
    TransmissionControlBlock(TransmissionControlBlock const&);
    TransmissionControlBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TransmissionControlBlock@dcsctp@@UEAA@XZ
    virtual ~TransmissionControlBlock();

    // vIndex: 1, symbol: ?is_connection_established@TransmissionControlBlock@dcsctp@@UEBA_NXZ
    virtual bool is_connection_established() const;

    // vIndex: 2, symbol:
    // ?my_initial_tsn@TransmissionControlBlock@dcsctp@@UEBA?AV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@XZ
    virtual class webrtc::StrongAlias<class dcsctp::TSNTag, uint> my_initial_tsn() const;

    // vIndex: 3, symbol:
    // ?peer_initial_tsn@TransmissionControlBlock@dcsctp@@UEBA?AV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@XZ
    virtual class webrtc::StrongAlias<class dcsctp::TSNTag, uint> peer_initial_tsn() const;

    // vIndex: 4, symbol: ?callbacks@TransmissionControlBlock@dcsctp@@UEBAAEAVDcSctpSocketCallbacks@2@XZ
    virtual class dcsctp::DcSctpSocketCallbacks& callbacks() const;

    // vIndex: 5, symbol: ?ObserveRTT@TransmissionControlBlock@dcsctp@@UEAAXVDurationMs@2@@Z
    virtual void ObserveRTT(class dcsctp::DurationMs);

    // vIndex: 6, symbol: ?current_rto@TransmissionControlBlock@dcsctp@@UEBA?AVDurationMs@2@XZ
    virtual class dcsctp::DurationMs current_rto() const;

    // vIndex: 7, symbol:
    // ?IncrementTxErrorCounter@TransmissionControlBlock@dcsctp@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual bool IncrementTxErrorCounter(std::string_view);

    // vIndex: 8, symbol: ?ClearTxErrorCounter@TransmissionControlBlock@dcsctp@@UEAAXXZ
    virtual void ClearTxErrorCounter();

    // vIndex: 9, symbol: ?HasTooManyTxErrors@TransmissionControlBlock@dcsctp@@UEBA_NXZ
    virtual bool HasTooManyTxErrors() const;

    // vIndex: 10, symbol: ?PacketBuilder@TransmissionControlBlock@dcsctp@@UEBA?AVBuilder@SctpPacket@2@XZ
    virtual class dcsctp::SctpPacket::Builder PacketBuilder() const;

    // vIndex: 11, symbol: ?Send@TransmissionControlBlock@dcsctp@@UEAAXAEAVBuilder@SctpPacket@2@@Z
    virtual void Send(class dcsctp::SctpPacket::Builder&);

    // symbol: ?AddHandoverState@TransmissionControlBlock@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol: ?ClearCookieEchoChunk@TransmissionControlBlock@dcsctp@@QEAAXXZ
    MCAPI void ClearCookieEchoChunk();

    // symbol: ?GetHandoverReadiness@TransmissionControlBlock@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol: ?MaybeSendFastRetransmit@TransmissionControlBlock@dcsctp@@QEAAXXZ
    MCAPI void MaybeSendFastRetransmit();

    // symbol: ?MaybeSendForwardTsn@TransmissionControlBlock@dcsctp@@QEAAXAEAVBuilder@SctpPacket@2@VTimeMs@2@@Z
    MCAPI void MaybeSendForwardTsn(class dcsctp::SctpPacket::Builder&, class dcsctp::TimeMs);

    // symbol: ?MaybeSendSack@TransmissionControlBlock@dcsctp@@QEAAXXZ
    MCAPI void MaybeSendSack();

    // symbol: ?RestoreFromState@TransmissionControlBlock@dcsctp@@QEAAXAEBUDcSctpSocketHandoverState@2@@Z
    MCAPI void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol: ?SendBufferedPackets@TransmissionControlBlock@dcsctp@@QEAAXVTimeMs@2@@Z
    MCAPI void SendBufferedPackets(class dcsctp::TimeMs);

    // symbol: ?SendBufferedPackets@TransmissionControlBlock@dcsctp@@QEAAXAEAVBuilder@SctpPacket@2@VTimeMs@2@@Z
    MCAPI void SendBufferedPackets(class dcsctp::SctpPacket::Builder&, class dcsctp::TimeMs);

    // symbol:
    // ??0TransmissionControlBlock@dcsctp@@QEAA@AEAVTimerManager@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUDcSctpOptions@1@AEBUCapabilities@1@AEAVDcSctpSocketCallbacks@1@AEAVSendQueue@1@V?$StrongAlias@VVerificationTagTag@dcsctp@@I@webrtc@@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@67_KV?$StrongAlias@VTieTagTag@dcsctp@@_K@webrtc@@AEAVPacketSender@1@V?$function@$$A6A_NXZ@4@@Z
    MCAPI TransmissionControlBlock(class dcsctp::TimerManager&, std::string_view, struct dcsctp::DcSctpOptions const&, struct dcsctp::Capabilities const&, class dcsctp::DcSctpSocketCallbacks&, class dcsctp::SendQueue&, class webrtc::StrongAlias<class dcsctp::VerificationTagTag, uint>, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, class webrtc::StrongAlias<class dcsctp::VerificationTagTag, uint>, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, uint64, class webrtc::StrongAlias<class dcsctp::TieTagTag, uint64>, class dcsctp::PacketSender&, std::function<bool(void)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnDelayedAckTimerExpiry@TransmissionControlBlock@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnDelayedAckTimerExpiry();

    // symbol: ?OnRtxTimerExpiry@TransmissionControlBlock@dcsctp@@AEAA?AV?$optional@VDurationMs@dcsctp@@@std@@XZ
    MCAPI std::optional<class dcsctp::DurationMs> OnRtxTimerExpiry();

    // NOLINTEND
};

}; // namespace dcsctp
