#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"
#include "mc/external/webrtc/RtpPacketMediaType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketQueueTTL; }
// clang-format on

namespace webrtc {

struct PrioritizedPacketQueue {
public:
    // PrioritizedPacketQueue inner types declare
    // clang-format off
    class QueuedPacket;
    class StreamQueue;
    // clang-format on

    // PrioritizedPacketQueue inner types define
    class QueuedPacket {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::webrtc::DataSize PacketSize() const;

        MCAPI ~QueuedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class StreamQueue {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::array<::std::deque<::webrtc::PrioritizedPacketQueue::QueuedPacket>, 5> DequeueAll();

        MCAPI ::webrtc::PrioritizedPacketQueue::QueuedPacket DequeuePacket(int);

        MCAPI bool EnqueuePacket(::webrtc::PrioritizedPacketQueue::QueuedPacket, int);

        MCAPI bool HasPacketsAtPrio(int) const;

        MCAPI bool IsEmpty() const;

        MCAPI ::webrtc::Timestamp LastEnqueueTime() const;

        MCAPI ::webrtc::Timestamp LeadingPacketEnqueueTime(int) const;

        MCAPI explicit StreamQueue(::webrtc::Timestamp);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::Timestamp);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::TimeDelta AverageQueueTime() const;

    MCAPI void DequeuePacketInternal(::webrtc::PrioritizedPacketQueue::QueuedPacket&);

    MCAPI bool Empty() const;

    MCAPI bool HasKeyframePackets(uint) const;

    MCAPI ::webrtc::Timestamp LeadingPacketEnqueueTime(::webrtc::RtpPacketMediaType) const;

    MCAPI ::webrtc::Timestamp LeadingPacketEnqueueTimeForRetransmission() const;

    MCAPI void MaybeUpdateTopPrioLevel();

    MCAPI ::webrtc::Timestamp OldestEnqueueTime() const;

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> Pop();

    MCAPI PrioritizedPacketQueue(::webrtc::Timestamp, bool, ::webrtc::PacketQueueTTL);

    MCAPI void PurgeOldPacketsAtPriorityLevel(int, ::webrtc::Timestamp);

    MCAPI void Push(::webrtc::Timestamp, ::std::unique_ptr<::webrtc::RtpPacketToSend>);

    MCAPI void RemovePacketsForSsrc(uint);

    MCAPI void SetPauseState(bool, ::webrtc::Timestamp);

    MCAPI int SizeInPackets() const;

    MCAPI ::webrtc::DataSize SizeInPayloadBytes() const;

    MCAPI void UpdateAverageQueueTime(::webrtc::Timestamp);

    MCAPI ~PrioritizedPacketQueue();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::absl::InlinedVector<::webrtc::TimeDelta, 5, ::std::allocator<::webrtc::TimeDelta>>
        ToTtlPerPrio(::webrtc::PacketQueueTTL);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::Timestamp, bool, ::webrtc::PacketQueueTTL);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
