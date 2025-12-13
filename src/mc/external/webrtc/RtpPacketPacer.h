#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class RtpPacketPacer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpPacketPacer() = default;

    // vIndex: 1
    virtual void CreateProbeClusters(::std::vector<::webrtc::ProbeClusterConfig>) = 0;

    // vIndex: 2
    virtual void Pause() = 0;

    // vIndex: 3
    virtual void Resume() = 0;

    // vIndex: 4
    virtual void SetCongested(bool) = 0;

    // vIndex: 5
    virtual void SetPacingRates(::webrtc::DataRate, ::webrtc::DataRate) = 0;

    // vIndex: 6
    virtual ::webrtc::TimeDelta OldestPacketWaitTime() const = 0;

    // vIndex: 7
    virtual ::webrtc::DataSize QueueSizeData() const = 0;

    // vIndex: 8
    virtual ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const = 0;

    // vIndex: 9
    virtual ::webrtc::TimeDelta ExpectedQueueTime() const = 0;

    // vIndex: 10
    virtual void SetQueueTimeLimit(::webrtc::TimeDelta) = 0;

    // vIndex: 11
    virtual void SetAccountForAudioPackets(bool) = 0;

    // vIndex: 12
    virtual void SetIncludeOverhead() = 0;

    // vIndex: 13
    virtual void SetTransportOverhead(::webrtc::DataSize) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
