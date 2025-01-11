#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SackChunk.h"
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class ImmediateAckFlagTag; }
namespace dcsctp { class SackChunk; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class DataTracker {
public:
    // DataTracker inner types declare
    // clang-format off
    struct AdditionalTsnBlocks;
    // clang-format on

    // DataTracker inner types define
    enum class AckState : uint {};

    struct AdditionalTsnBlocks {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

        MCAPI void EraseTo(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

        MCAPI void PopFront();

        MCAPI ~AdditionalTsnBlocks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI ::std::vector<::dcsctp::SackChunk::GapAckBlock> CreateGapAckBlocks() const;

    MCAPI ::dcsctp::SackChunk CreateSelectiveAck(uint64);

    MCAPI void ForceImmediateSack();

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI void HandleDelayedAckTimerExpiry();

    MCAPI bool HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>);

    MCAPI bool IsTSNValid(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>) const;

    MCAPI bool
        Observe(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::ImmediateAckFlagTag, bool>);

    MCAPI void ObservePacketEnd();

    MCAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCAPI bool ShouldSendAck(bool);

    MCAPI void UpdateAckState(::dcsctp::DataTracker::AckState, ::std::string_view);

    MCAPI bool will_increase_cum_ack_tsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>) const;

    MCAPI ~DataTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
