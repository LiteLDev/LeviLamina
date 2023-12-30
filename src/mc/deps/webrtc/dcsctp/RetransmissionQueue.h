#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/dcsctp/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class SackChunk; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class RetransmissionQueue {
public:
    // prevent constructor by default
    RetransmissionQueue& operator=(RetransmissionQueue const&);
    RetransmissionQueue(RetransmissionQueue const&);
    RetransmissionQueue();

public:
    // NOLINTBEGIN
    // symbol: ?AddHandoverState@RetransmissionQueue@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol: ?CommitResetStreams@RetransmissionQueue@dcsctp@@QEAAXXZ
    MCAPI void CommitResetStreams();

    // symbol:
    // ?GetChunksForFastRetransmit@RetransmissionQueue@dcsctp@@QEAA?AV?$vector@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@V?$allocator@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@@2@@std@@_K@Z
    MCAPI std::vector<std::pair<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data>>
          GetChunksForFastRetransmit(uint64);

    // symbol:
    // ?GetChunksToSend@RetransmissionQueue@dcsctp@@QEAA?AV?$vector@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@V?$allocator@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@@2@@std@@VTimeMs@2@_K@Z
    MCAPI std::vector<std::pair<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data>>
          GetChunksToSend(class dcsctp::TimeMs, uint64);

    // symbol: ?GetHandoverReadiness@RetransmissionQueue@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol: ?HandleSack@RetransmissionQueue@dcsctp@@QEAA_NVTimeMs@2@AEBVSackChunk@2@@Z
    MCAPI bool HandleSack(class dcsctp::TimeMs, class dcsctp::SackChunk const&);

    // symbol: ?HandleT3RtxTimerExpiry@RetransmissionQueue@dcsctp@@QEAAXXZ
    MCAPI void HandleT3RtxTimerExpiry();

    // symbol: ?HasStreamsReadyToBeReset@RetransmissionQueue@dcsctp@@QEBA_NXZ
    MCAPI bool HasStreamsReadyToBeReset() const;

    // symbol: ?PrepareResetStream@RetransmissionQueue@dcsctp@@QEAAXV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@@Z
    MCAPI void PrepareResetStream(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>);

    // symbol: ?RestoreFromState@RetransmissionQueue@dcsctp@@QEAAXAEBUDcSctpSocketHandoverState@2@@Z
    MCAPI void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol:
    // ??0RetransmissionQueue@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVDcSctpSocketCallbacks@1@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@_KAEAVSendQueue@1@V?$function@$$A6AXVDurationMs@dcsctp@@@Z@3@V?$function@$$A6AXXZ@3@AEAVTimer@1@AEBUDcSctpOptions@1@_N9@Z
    MCAPI RetransmissionQueue(
        std::string_view,
        class dcsctp::DcSctpSocketCallbacks*,
        class webrtc::StrongAlias<class dcsctp::TSNTag, uint>,
        uint64,
        class dcsctp::SendQueue&,
        std::function<void(class dcsctp::DurationMs)>,
        std::function<void(void)>,
        class dcsctp::Timer&,
        struct dcsctp::DcSctpOptions const&,
        bool,
        bool
    );

    // symbol: ?RollbackResetStreams@RetransmissionQueue@dcsctp@@QEAAXXZ
    MCAPI void RollbackResetStreams();

    // symbol: ?ShouldSendForwardTsn@RetransmissionQueue@dcsctp@@QEAA_NVTimeMs@2@@Z
    MCAPI bool ShouldSendForwardTsn(class dcsctp::TimeMs);

    // symbol: ?can_send_data@RetransmissionQueue@dcsctp@@QEBA_NXZ
    MCAPI bool can_send_data() const;

    // symbol: ??1RetransmissionQueue@dcsctp@@QEAA@XZ
    MCAPI ~RetransmissionQueue();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetSerializedChunkSize@RetransmissionQueue@dcsctp@@AEBA_KAEBUData@2@@Z
    MCAPI uint64 GetSerializedChunkSize(struct dcsctp::Data const&) const;

    // symbol: ?HandleIncreasedCumulativeTsnAck@RetransmissionQueue@dcsctp@@AEAAX_K0@Z
    MCAPI void HandleIncreasedCumulativeTsnAck(uint64, uint64);

    // symbol:
    // ?HandlePacketLoss@RetransmissionQueue@dcsctp@@AEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@@Z
    MCAPI void
        HandlePacketLoss(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

    // symbol: ?IsSackValid@RetransmissionQueue@dcsctp@@AEBA_NAEBVSackChunk@2@@Z
    MCAPI bool IsSackValid(class dcsctp::SackChunk const&) const;

    // symbol:
    // ?MaybeExitFastRecovery@RetransmissionQueue@dcsctp@@AEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@@Z
    MCAPI void MaybeExitFastRecovery(class dcsctp::UnwrappedSequenceNumber<
                                     class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

    // symbol: ?StartT3RtxTimerIfOutstandingData@RetransmissionQueue@dcsctp@@AEAAXXZ
    MCAPI void StartT3RtxTimerIfOutstandingData();

    // symbol:
    // ?UpdateRTT@RetransmissionQueue@dcsctp@@AEAAXVTimeMs@2@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@@Z
    MCAPI void
        UpdateRTT(class dcsctp::TimeMs, class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

    // symbol: ?UpdateReceiverWindow@RetransmissionQueue@dcsctp@@AEAAXI@Z
    MCAPI void UpdateReceiverWindow(uint);

    // symbol: ?max_bytes_to_send@RetransmissionQueue@dcsctp@@AEBA_KXZ
    MCAPI uint64 max_bytes_to_send() const;

    // NOLINTEND
};

}; // namespace dcsctp
