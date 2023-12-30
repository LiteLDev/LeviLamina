#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/dcsctp/SackChunk.h"
#include "mc/deps/webrtc/dcsctp/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class ImmediateAckFlagTag; }
namespace dcsctp { class SackChunk; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class DataTracker {
public:
    // DataTracker inner types declare
    // clang-format off
    class AdditionalTsnBlocks;
    // clang-format on

    // DataTracker inner types define
    enum class AckState {};

    class AdditionalTsnBlocks {
    public:
        // prevent constructor by default
        AdditionalTsnBlocks& operator=(AdditionalTsnBlocks const&);
        AdditionalTsnBlocks(AdditionalTsnBlocks const&);
        AdditionalTsnBlocks();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?Add@AdditionalTsnBlocks@DataTracker@dcsctp@@QEAA_NV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@@Z
        MCAPI bool Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

        // symbol:
        // ?EraseTo@AdditionalTsnBlocks@DataTracker@dcsctp@@QEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@@Z
        MCAPI void
            EraseTo(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

        // symbol: ?PopFront@AdditionalTsnBlocks@DataTracker@dcsctp@@QEAAXXZ
        MCAPI void PopFront();

        // symbol: ??1AdditionalTsnBlocks@DataTracker@dcsctp@@QEAA@XZ
        MCAPI ~AdditionalTsnBlocks();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
    DataTracker();

public:
    // NOLINTBEGIN
    // symbol: ?AddHandoverState@DataTracker@dcsctp@@QEAAXAEAUDcSctpSocketHandoverState@2@@Z
    MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // symbol: ?CreateSelectiveAck@DataTracker@dcsctp@@QEAA?AVSackChunk@2@_K@Z
    MCAPI class dcsctp::SackChunk CreateSelectiveAck(uint64);

    // symbol:
    // ??0DataTracker@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVTimer@1@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI DataTracker(std::string_view, class dcsctp::Timer*, class webrtc::StrongAlias<class dcsctp::TSNTag, uint>);

    // symbol: ?ForceImmediateSack@DataTracker@dcsctp@@QEAAXXZ
    MCAPI void ForceImmediateSack();

    // symbol: ?GetHandoverReadiness@DataTracker@dcsctp@@QEBA?AVHandoverReadinessStatus@2@XZ
    MCAPI class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // symbol: ?HandleDelayedAckTimerExpiry@DataTracker@dcsctp@@QEAAXXZ
    MCAPI void HandleDelayedAckTimerExpiry();

    // symbol: ?HandleForwardTsn@DataTracker@dcsctp@@QEAAXV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI void HandleForwardTsn(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>);

    // symbol: ?IsTSNValid@DataTracker@dcsctp@@QEBA_NV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI bool IsTSNValid(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>) const;

    // symbol:
    // ?Observe@DataTracker@dcsctp@@QEAA_NV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@V?$StrongAlias@VImmediateAckFlagTag@dcsctp@@_N@4@@Z
    MCAPI bool
        Observe(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, class webrtc::StrongAlias<class dcsctp::ImmediateAckFlagTag, bool>);

    // symbol: ?ObservePacketEnd@DataTracker@dcsctp@@QEAAXXZ
    MCAPI void ObservePacketEnd();

    // symbol: ?RestoreFromState@DataTracker@dcsctp@@QEAAXAEBUDcSctpSocketHandoverState@2@@Z
    MCAPI void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol: ?ShouldSendAck@DataTracker@dcsctp@@QEAA_N_N@Z
    MCAPI bool ShouldSendAck(bool);

    // symbol: ?will_increase_cum_ack_tsn@DataTracker@dcsctp@@QEBA_NV?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@Z
    MCAPI bool will_increase_cum_ack_tsn(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>) const;

    // symbol: ??1DataTracker@dcsctp@@QEAA@XZ
    MCAPI ~DataTracker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?CreateGapAckBlocks@DataTracker@dcsctp@@AEBA?AV?$vector@UGapAckBlock@SackChunk@dcsctp@@V?$allocator@UGapAckBlock@SackChunk@dcsctp@@@std@@@std@@XZ
    MCAPI std::vector<struct dcsctp::SackChunk::GapAckBlock> CreateGapAckBlocks() const;

    // symbol:
    // ?UpdateAckState@DataTracker@dcsctp@@AEAAXW4AckState@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void UpdateAckState(::dcsctp::DataTracker::AckState, std::string_view);

    // NOLINTEND
};

}; // namespace dcsctp
