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
        MCNAPI ::webrtc::DataSize PacketSize() const;

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
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::array<::std::deque<::webrtc::PrioritizedPacketQueue::QueuedPacket>, 5> DequeueAll();

        MCNAPI ::webrtc::PrioritizedPacketQueue::QueuedPacket DequeuePacket(int);

        MCNAPI bool EnqueuePacket(::webrtc::PrioritizedPacketQueue::QueuedPacket, int);

        MCNAPI bool HasPacketsAtPrio(int) const;

        MCNAPI bool IsEmpty() const;

        MCNAPI ::webrtc::Timestamp LastEnqueueTime() const;

        MCNAPI ::webrtc::Timestamp LeadingPacketEnqueueTime(int) const;

        MCNAPI explicit StreamQueue(::webrtc::Timestamp);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::Timestamp);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta AverageQueueTime() const;

    MCNAPI void DequeuePacketInternal(::webrtc::PrioritizedPacketQueue::QueuedPacket&);

    MCNAPI bool Empty() const;

    MCNAPI bool HasKeyframePackets(uint) const;

    MCNAPI ::webrtc::Timestamp LeadingPacketEnqueueTime(::webrtc::RtpPacketMediaType) const;

    MCNAPI ::webrtc::Timestamp LeadingPacketEnqueueTimeForRetransmission() const;

    MCNAPI void MaybeUpdateTopPrioLevel();

    MCNAPI ::webrtc::Timestamp OldestEnqueueTime() const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend> Pop();

    MCNAPI PrioritizedPacketQueue(::webrtc::Timestamp, bool, ::webrtc::PacketQueueTTL);

    MCNAPI void PurgeOldPacketsAtPriorityLevel(int, ::webrtc::Timestamp);

    MCNAPI void Push(::webrtc::Timestamp, ::std::unique_ptr<::webrtc::RtpPacketToSend>);

    MCNAPI void RemovePacketsForSsrc(uint);

    MCNAPI void SetPauseState(bool, ::webrtc::Timestamp);

    MCNAPI int SizeInPackets() const;

    MCNAPI ::webrtc::DataSize SizeInPayloadBytes() const;

    MCNAPI void UpdateAverageQueueTime(::webrtc::Timestamp);

    MCNAPI ~PrioritizedPacketQueue();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::absl::InlinedVector<::webrtc::TimeDelta, 5, ::std::allocator<::webrtc::TimeDelta>>
        ToTtlPerPrio(::webrtc::PacketQueueTTL);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Timestamp, bool, ::webrtc::PacketQueueTTL);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
