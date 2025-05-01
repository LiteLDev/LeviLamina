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
        // AdditionalTsnBlocks inner types declare
        // clang-format off
        struct TsnRange;
        // clang-format on

        // AdditionalTsnBlocks inner types define
        struct TsnRange {};

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

        MCNAPI void EraseTo(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

        MCNAPI void PopFront();

        MCNAPI ~AdditionalTsnBlocks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI ::std::vector<::dcsctp::SackChunk::GapAckBlock> CreateGapAckBlocks() const;

    MCNAPI ::dcsctp::SackChunk CreateSelectiveAck(uint64);

    MCNAPI void ForceImmediateSack();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void HandleDelayedAckTimerExpiry();

    MCNAPI bool HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>);

    MCNAPI bool IsTSNValid(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>) const;

    MCNAPI bool
        Observe(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::webrtc::StrongAlias<::dcsctp::ImmediateAckFlagTag, bool>);

    MCNAPI void ObservePacketEnd();

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCNAPI bool ShouldSendAck(bool);

    MCNAPI void UpdateAckState(::dcsctp::DataTracker::AckState, ::std::string_view);

    MCNAPI bool will_increase_cum_ack_tsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>) const;

    MCNAPI ~DataTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
