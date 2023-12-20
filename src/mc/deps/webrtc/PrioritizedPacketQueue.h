#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketMediaType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
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
        // prevent constructor by default
        QueuedPacket& operator=(QueuedPacket const&);
        QueuedPacket(QueuedPacket const&);
        QueuedPacket();

    public:
        // NOLINTBEGIN
        // symbol: ?PacketSize@QueuedPacket@PrioritizedPacketQueue@webrtc@@QEBA?AVDataSize@3@XZ
        MCAPI class webrtc::DataSize PacketSize() const;

        // symbol: ??1QueuedPacket@PrioritizedPacketQueue@webrtc@@QEAA@XZ
        MCAPI ~QueuedPacket();

        // NOLINTEND
    };

    class StreamQueue {
    public:
        // prevent constructor by default
        StreamQueue& operator=(StreamQueue const&);
        StreamQueue(StreamQueue const&);
        StreamQueue();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?DequeueAll@StreamQueue@PrioritizedPacketQueue@webrtc@@QEAA?AV?$array@V?$deque@VQueuedPacket@PrioritizedPacketQueue@webrtc@@V?$allocator@VQueuedPacket@PrioritizedPacketQueue@webrtc@@@std@@@std@@$03@std@@XZ
        MCAPI std::array<std::deque<class webrtc::PrioritizedPacketQueue::QueuedPacket>, 4> DequeueAll();

        // symbol: ?DequeuePacket@StreamQueue@PrioritizedPacketQueue@webrtc@@QEAA?AVQueuedPacket@23@H@Z
        MCAPI class webrtc::PrioritizedPacketQueue::QueuedPacket DequeuePacket(int);

        // symbol: ?EnqueuePacket@StreamQueue@PrioritizedPacketQueue@webrtc@@QEAA_NVQueuedPacket@23@H@Z
        MCAPI bool EnqueuePacket(class webrtc::PrioritizedPacketQueue::QueuedPacket, int);

        // symbol: ?HasPacketsAtPrio@StreamQueue@PrioritizedPacketQueue@webrtc@@QEBA_NH@Z
        MCAPI bool HasPacketsAtPrio(int) const;

        // symbol: ?IsEmpty@StreamQueue@PrioritizedPacketQueue@webrtc@@QEBA_NXZ
        MCAPI bool IsEmpty() const;

        // symbol: ?LastEnqueueTime@StreamQueue@PrioritizedPacketQueue@webrtc@@QEBA?AVTimestamp@3@XZ
        MCAPI class webrtc::Timestamp LastEnqueueTime() const;

        // symbol: ?LeadingPacketEnqueueTime@StreamQueue@PrioritizedPacketQueue@webrtc@@QEBA?AVTimestamp@3@H@Z
        MCAPI class webrtc::Timestamp LeadingPacketEnqueueTime(int) const;

        // symbol: ??0StreamQueue@PrioritizedPacketQueue@webrtc@@QEAA@VTimestamp@2@@Z
        MCAPI explicit StreamQueue(class webrtc::Timestamp);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PrioritizedPacketQueue& operator=(PrioritizedPacketQueue const&);
    PrioritizedPacketQueue(PrioritizedPacketQueue const&);
    PrioritizedPacketQueue();

public:
    // NOLINTBEGIN
    // symbol: ?AverageQueueTime@PrioritizedPacketQueue@webrtc@@QEBA?AVTimeDelta@2@XZ
    MCAPI class webrtc::TimeDelta AverageQueueTime() const;

    // symbol: ?Empty@PrioritizedPacketQueue@webrtc@@QEBA_NXZ
    MCAPI bool Empty() const;

    // symbol: ?LeadingPacketEnqueueTime@PrioritizedPacketQueue@webrtc@@QEBA?AVTimestamp@2@W4RtpPacketMediaType@2@@Z
    MCAPI class webrtc::Timestamp LeadingPacketEnqueueTime(::webrtc::RtpPacketMediaType) const;

    // symbol: ?OldestEnqueueTime@PrioritizedPacketQueue@webrtc@@QEBA?AVTimestamp@2@XZ
    MCAPI class webrtc::Timestamp OldestEnqueueTime() const;

    // symbol:
    // ?Pop@PrioritizedPacketQueue@webrtc@@QEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend> Pop();

    // symbol: ??0PrioritizedPacketQueue@webrtc@@QEAA@VTimestamp@1@@Z
    MCAPI explicit PrioritizedPacketQueue(class webrtc::Timestamp);

    // symbol:
    // ?Push@PrioritizedPacketQueue@webrtc@@QEAAXVTimestamp@2@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@Z
    MCAPI void Push(class webrtc::Timestamp, std::unique_ptr<class webrtc::RtpPacketToSend>);

    // symbol: ?RemovePacketsForSsrc@PrioritizedPacketQueue@webrtc@@QEAAXI@Z
    MCAPI void RemovePacketsForSsrc(uint);

    // symbol: ?SetPauseState@PrioritizedPacketQueue@webrtc@@QEAAX_NVTimestamp@2@@Z
    MCAPI void SetPauseState(bool, class webrtc::Timestamp);

    // symbol: ?SizeInPackets@PrioritizedPacketQueue@webrtc@@QEBAHXZ
    MCAPI int SizeInPackets() const;

    // symbol: ?SizeInPacketsPerRtpPacketMediaType@PrioritizedPacketQueue@webrtc@@QEBAAEBV?$array@H$04@std@@XZ
    MCAPI std::array<int, 5> const& SizeInPacketsPerRtpPacketMediaType() const;

    // symbol: ?SizeInPayloadBytes@PrioritizedPacketQueue@webrtc@@QEBA?AVDataSize@2@XZ
    MCAPI class webrtc::DataSize SizeInPayloadBytes() const;

    // symbol: ?UpdateAverageQueueTime@PrioritizedPacketQueue@webrtc@@QEAAXVTimestamp@2@@Z
    MCAPI void UpdateAverageQueueTime(class webrtc::Timestamp);

    // symbol: ??1PrioritizedPacketQueue@webrtc@@QEAA@XZ
    MCAPI ~PrioritizedPacketQueue();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DequeuePacketInternal@PrioritizedPacketQueue@webrtc@@AEAAXAEAVQueuedPacket@12@@Z
    MCAPI void DequeuePacketInternal(class webrtc::PrioritizedPacketQueue::QueuedPacket&);

    // symbol: ?MaybeUpdateTopPrioLevel@PrioritizedPacketQueue@webrtc@@AEAAXXZ
    MCAPI void MaybeUpdateTopPrioLevel();

    // NOLINTEND
};

}; // namespace webrtc
