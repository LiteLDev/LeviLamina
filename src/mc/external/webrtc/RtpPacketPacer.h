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

    virtual void CreateProbeClusters(::std::vector<::webrtc::ProbeClusterConfig> probe_cluster_configs) = 0;

    virtual void Pause() = 0;

    virtual void Resume() = 0;

    virtual void SetCongested(bool congested) = 0;

    virtual void SetPacingRates(::webrtc::DataRate pacing_rate, ::webrtc::DataRate padding_rate) = 0;

    virtual ::webrtc::TimeDelta OldestPacketWaitTime() const = 0;

    virtual ::webrtc::DataSize QueueSizeData() const = 0;

    virtual ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const = 0;

    virtual ::webrtc::TimeDelta ExpectedQueueTime() const = 0;

    virtual void SetQueueTimeLimit(::webrtc::TimeDelta limit) = 0;

    virtual void SetAccountForAudioPackets(bool account_for_audio) = 0;

    virtual void SetIncludeOverhead() = 0;

    virtual void SetTransportOverhead(::webrtc::DataSize overhead_per_packet) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
