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
    class AdditionalTsnBlocks;
    // clang-format on
    
    // DataTracker inner types define
    enum class AckState : int {
        KIdle = 0,
        KBecomingDelayed = 1,
        KDelayed = 2,
        KImmediate = 3,
    };
    
    class AdditionalTsnBlocks {
    public:
        // AdditionalTsnBlocks inner types declare
        // clang-format off
        struct TsnRange;
        // clang-format on
        
        // AdditionalTsnBlocks inner types define
        struct TsnRange {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnka88998;
            ::ll::UntypedStorage<8, 8> mUnk4f0067;
            // NOLINTEND
        
        public:
            // prevent constructor by default
            TsnRange& operator=(TsnRange const&);
            TsnRange(TsnRange const&);
            TsnRange();
        
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk16b715;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        AdditionalTsnBlocks& operator=(AdditionalTsnBlocks const&);
        AdditionalTsnBlocks(AdditionalTsnBlocks const&);
        AdditionalTsnBlocks();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool Add(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn);
    
        MCNAPI void EraseTo(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> tsn);
    
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8c0fc6;
    ::ll::UntypedStorage<1, 1> mUnk4300fa;
    ::ll::UntypedStorage<8, 8> mUnkf94dae;
    ::ll::UntypedStorage<4, 4> mUnkad29d7;
    ::ll::UntypedStorage<8, 16> mUnkeba3aa;
    ::ll::UntypedStorage<8, 8> mUnk87420d;
    ::ll::UntypedStorage<8, 24> mUnk415778;
    ::ll::UntypedStorage<8, 16> mUnk200792;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
    DataTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI ::std::vector<::dcsctp::SackChunk::GapAckBlock> CreateGapAckBlocks() const;

    MCNAPI ::dcsctp::SackChunk CreateSelectiveAck(uint64 a_rwnd);

    MCNAPI void ForceImmediateSack();

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI void HandleDelayedAckTimerExpiry();

    MCNAPI bool HandleForwardTsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> new_cumulative_ack);

    MCNAPI bool IsTSNValid(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn) const;

    MCNAPI bool Observe(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn, ::webrtc::StrongAlias<::dcsctp::ImmediateAckFlagTag, bool> immediate_ack);

    MCNAPI void ObservePacketEnd();

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI bool ShouldSendAck(bool also_if_delayed);

    MCNAPI void UpdateAckState(::dcsctp::DataTracker::AckState new_state, ::std::string_view reason);

    MCNAPI bool will_increase_cum_ack_tsn(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn) const;

    MCNAPI ~DataTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
