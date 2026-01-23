#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/OutstandingData.h"
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
    // RetransmissionQueue inner types define
    enum class CongestionAlgorithmPhase : int {
        KSlowStart           = 0,
        KCongestionAvoidance = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd5442e;
    ::ll::UntypedStorage<8, 176> mUnkea76dc;
    ::ll::UntypedStorage<8, 8>   mUnk3c5df9;
    ::ll::UntypedStorage<1, 1>   mUnk7baf69;
    ::ll::UntypedStorage<8, 16>  mUnk3acecb;
    ::ll::UntypedStorage<8, 8>   mUnkacdeed;
    ::ll::UntypedStorage<8, 64>  mUnk78223f;
    ::ll::UntypedStorage<8, 64>  mUnkddd25f;
    ::ll::UntypedStorage<8, 8>   mUnk9a0f5a;
    ::ll::UntypedStorage<8, 16>  mUnk918279;
    ::ll::UntypedStorage<8, 8>   mUnk1cae6d;
    ::ll::UntypedStorage<8, 8>   mUnk23bc7b;
    ::ll::UntypedStorage<8, 8>   mUnk3ad22a;
    ::ll::UntypedStorage<8, 8>   mUnkfe5643;
    ::ll::UntypedStorage<8, 8>   mUnkcc82a6;
    ::ll::UntypedStorage<8, 8>   mUnk26ef50;
    ::ll::UntypedStorage<8, 16>  mUnkeeee55;
    ::ll::UntypedStorage<8, 8>   mUnked7d5a;
    ::ll::UntypedStorage<8, 200> mUnk477ab7;
    // NOLINTEND

public:
    // prevent constructor by default
    RetransmissionQueue& operator=(RetransmissionQueue const&);
    RetransmissionQueue(RetransmissionQueue const&);
    RetransmissionQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> BeginResetStreams();

    MCNAPI void CommitResetStreams();

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    GetChunksForFastRetransmit(uint64 bytes_in_packet);

    MCNAPI ::std::vector<::std::pair<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data>>
    GetChunksToSend(::webrtc::Timestamp now, uint64 bytes_remaining_in_packet);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI bool HandleSack(::webrtc::Timestamp now, ::dcsctp::SackChunk const& sack);

    MCNAPI void HandleT3RtxTimerExpiry();

    MCNAPI bool HasStreamsReadyToBeReset() const;

    MCNAPI void PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI RetransmissionQueue(
        ::std::string_view                            log_prefix,
        ::dcsctp::DcSctpSocketCallbacks*              callbacks,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> my_initial_tsn,
        uint64                                        a_rwnd,
        ::dcsctp::SendQueue&                          send_queue,
        ::std::function<void(::webrtc::TimeDelta)>    on_new_rtt,
        ::std::function<void()>                       on_clear_retransmission_counter,
        ::dcsctp::Timer&                              t3_rtx,
        ::dcsctp::DcSctpOptions const&                options,
        bool                                          supports_partial_reliability,
        bool                                          use_message_interleaving
    );

    MCNAPI void RollbackResetStreams();

    MCNAPI bool ShouldSendForwardTsn(::webrtc::Timestamp now);

    MCNAPI bool can_send_data() const;

    MCNAPI ~RetransmissionQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view                            log_prefix,
        ::dcsctp::DcSctpSocketCallbacks*              callbacks,
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint> my_initial_tsn,
        uint64                                        a_rwnd,
        ::dcsctp::SendQueue&                          send_queue,
        ::std::function<void(::webrtc::TimeDelta)>    on_new_rtt,
        ::std::function<void()>                       on_clear_retransmission_counter,
        ::dcsctp::Timer&                              t3_rtx,
        ::dcsctp::DcSctpOptions const&                options,
        bool                                          supports_partial_reliability,
        bool                                          use_message_interleaving
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
