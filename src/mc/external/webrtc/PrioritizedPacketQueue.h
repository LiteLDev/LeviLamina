#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"
#include "mc/external/webrtc/RtpPacketMediaType.h"
#include "mc/external/webrtc/TimeDelta.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketQueueTTL; }
// clang-format on

namespace webrtc {

class PrioritizedPacketQueue {
public:
    // PrioritizedPacketQueue inner types declare
    // clang-format off
    class QueuedPacket;
    class StreamQueue;
    // clang-format on

    // PrioritizedPacketQueue inner types define
    class QueuedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk23e2c0;
        ::ll::UntypedStorage<8, 8> mUnk92bd57;
        ::ll::UntypedStorage<8, 8> mUnk885886;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedPacket& operator=(QueuedPacket const&);
        QueuedPacket(QueuedPacket const&);
        QueuedPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class StreamQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 200> mUnk68987d;
        ::ll::UntypedStorage<8, 8>   mUnk27b62d;
        ::ll::UntypedStorage<4, 4>   mUnk43db29;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamQueue& operator=(StreamQueue const&);
        StreamQueue(StreamQueue const&);
        StreamQueue();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::webrtc::PrioritizedPacketQueue::QueuedPacket DequeuePacket(int priority_level);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk3309b2;
    ::ll::UntypedStorage<8, 48>  mUnk5c7bb7;
    ::ll::UntypedStorage<8, 8>   mUnka15ad9;
    ::ll::UntypedStorage<8, 8>   mUnk33d378;
    ::ll::UntypedStorage<4, 4>   mUnk54e8e5;
    ::ll::UntypedStorage<4, 20>  mUnkee0614;
    ::ll::UntypedStorage<8, 8>   mUnkf7e635;
    ::ll::UntypedStorage<8, 8>   mUnk1d9a31;
    ::ll::UntypedStorage<1, 1>   mUnkd68fd2;
    ::ll::UntypedStorage<8, 8>   mUnk711dff;
    ::ll::UntypedStorage<8, 64>  mUnk9457a3;
    ::ll::UntypedStorage<8, 200> mUnk9c7a05;
    ::ll::UntypedStorage<4, 4>   mUnk9b20c7;
    ::ll::UntypedStorage<8, 16>  mUnk17d552;
    // NOLINTEND

public:
    // prevent constructor by default
    PrioritizedPacketQueue& operator=(PrioritizedPacketQueue const&);
    PrioritizedPacketQueue(PrioritizedPacketQueue const&);
    PrioritizedPacketQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta AverageQueueTime() const;

    MCNAPI void DequeuePacketInternal(::webrtc::PrioritizedPacketQueue::QueuedPacket& packet);

    MCNAPI bool Empty() const;

    MCNAPI bool HasKeyframePackets(uint ssrc) const;

    MCNAPI ::webrtc::Timestamp LeadingPacketEnqueueTime(::webrtc::RtpPacketMediaType type) const;

    MCNAPI ::webrtc::Timestamp LeadingPacketEnqueueTimeForRetransmission() const;

    MCNAPI void MaybeUpdateTopPrioLevel();

    MCNAPI ::webrtc::Timestamp OldestEnqueueTime() const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> Pop();

    MCNAPI PrioritizedPacketQueue(
        ::webrtc::Timestamp      creation_time,
        bool                     prioritize_audio_retransmission,
        ::webrtc::PacketQueueTTL packet_queue_ttl
    );

    MCNAPI void PurgeOldPacketsAtPriorityLevel(int prio_level, ::webrtc::Timestamp now);

    MCNAPI void Push(::webrtc::Timestamp enqueue_time, ::std::unique_ptr<::webrtc::RtpPacketToSend> packet);

    MCNAPI void RemovePacketsForSsrc(uint ssrc);

    MCNAPI void SetPauseState(bool paused, ::webrtc::Timestamp now);

    MCNAPI int SizeInPackets() const;

    MCNAPI ::webrtc::DataSize SizeInPayloadBytes() const;

    MCNAPI void UpdateAverageQueueTime(::webrtc::Timestamp now);

    MCNAPI ~PrioritizedPacketQueue();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::absl::InlinedVector<::webrtc::TimeDelta, 5, ::std::allocator<::webrtc::TimeDelta>>
    ToTtlPerPrio(::webrtc::PacketQueueTTL packet_queue_ttl);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Timestamp      creation_time,
        bool                     prioritize_audio_retransmission,
        ::webrtc::PacketQueueTTL packet_queue_ttl
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
