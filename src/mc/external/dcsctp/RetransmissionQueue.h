#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class SackChunk; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class RetransmissionQueue {
public:
    // prevent constructor by default
    RetransmissionQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> BeginResetStreams();

    MCNAPI void CommitResetStreams();

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksForFastRetransmit(uint64);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToSend(::webrtc::Timestamp, uint64);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI uint64 GetSerializedChunkSize(::dcsctp::Data const&) const;

    MCNAPI void HandleIncreasedCumulativeTsnAck(uint64, uint64);

    MCNAPI void HandlePacketLoss(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCNAPI bool HandleSack(::webrtc::Timestamp, ::dcsctp::SackChunk const&);

    MCNAPI void HandleT3RtxTimerExpiry();

    MCNAPI bool HasStreamsReadyToBeReset() const;

    MCNAPI bool IsSackValid(::dcsctp::SackChunk const&) const;

    MCNAPI void MaybeExitFastRecovery(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCNAPI void PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>);

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCNAPI RetransmissionQueue(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks*,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>,
        uint64,
        ::dcsctp::SendQueue&,
        ::std::function<void(::webrtc::TimeDelta)>,
        ::std::function<void()>,
        ::dcsctp::Timer&,
        ::dcsctp::DcSctpOptions const&,
        bool,
        bool
    );

    MCNAPI void RollbackResetStreams();

    MCNAPI bool ShouldSendForwardTsn(::webrtc::Timestamp);

    MCNAPI void StartT3RtxTimerIfOutstandingData();

    MCNAPI void
        UpdateRTT(::webrtc::Timestamp, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCNAPI void UpdateReceiverWindow(uint);

    MCNAPI bool can_send_data() const;

    MCNAPI uint64 max_bytes_to_send() const;

    MCNAPI ~RetransmissionQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks*,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>,
        uint64,
        ::dcsctp::SendQueue&,
        ::std::function<void(::webrtc::TimeDelta)>,
        ::std::function<void()>,
        ::dcsctp::Timer&,
        ::dcsctp::DcSctpOptions const&,
        bool,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
