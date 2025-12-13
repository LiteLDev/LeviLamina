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
    virtual ~RtpPacketPacer() = default;

    virtual void CreateProbeClusters(::std::vector<::webrtc::ProbeClusterConfig>) = 0;

    virtual void Pause() = 0;

    virtual void Resume() = 0;

    virtual void SetCongested(bool) = 0;

    virtual void SetPacingRates(::webrtc::DataRate, ::webrtc::DataRate) = 0;

    virtual ::webrtc::TimeDelta OldestPacketWaitTime() const = 0;

    virtual ::webrtc::DataSize QueueSizeData() const = 0;

    virtual ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const = 0;

    virtual ::webrtc::TimeDelta ExpectedQueueTime() const = 0;

    virtual void SetQueueTimeLimit(::webrtc::TimeDelta) = 0;

    virtual void SetAccountForAudioPackets(bool) = 0;

    virtual void SetIncludeOverhead() = 0;

    virtual void SetTransportOverhead(::webrtc::DataSize) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
