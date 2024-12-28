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
    RetransmissionQueue& operator=(RetransmissionQueue const&);
    RetransmissionQueue(RetransmissionQueue const&);
    RetransmissionQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> BeginResetStreams();

    MCAPI void CommitResetStreams();

    MCAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksForFastRetransmit(uint64);

    MCAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
        GetChunksToSend(::webrtc::Timestamp, uint64);

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI uint64 GetSerializedChunkSize(::dcsctp::Data const&) const;

    MCAPI void HandleIncreasedCumulativeTsnAck(uint64, uint64);

    MCAPI void HandlePacketLoss(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCAPI bool HandleSack(::webrtc::Timestamp, ::dcsctp::SackChunk const&);

    MCAPI void HandleT3RtxTimerExpiry();

    MCAPI bool HasStreamsReadyToBeReset() const;

    MCAPI bool IsSackValid(::dcsctp::SackChunk const&) const;

    MCAPI void MaybeExitFastRecovery(::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCAPI void PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>);

    MCAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCAPI RetransmissionQueue(
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

    MCAPI void RollbackResetStreams();

    MCAPI bool ShouldSendForwardTsn(::webrtc::Timestamp);

    MCAPI void StartT3RtxTimerIfOutstandingData();

    MCAPI void
        UpdateRTT(::webrtc::Timestamp, ::dcsctp::UnwrappedSequenceNumber<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);

    MCAPI void UpdateReceiverWindow(uint);

    MCAPI bool can_send_data() const;

    MCAPI uint64 max_bytes_to_send() const;

    MCAPI ~RetransmissionQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
