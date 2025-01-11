#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketMediaType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

struct PacingController {
public:
    // PacingController inner types declare
    // clang-format off
    struct Configuration;
    class PacketSender;
    // clang-format on

    // PacingController inner types define
    struct Configuration {};

    class PacketSender {};

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CreateProbeClusters(::rtc::ArrayView<::webrtc::ProbeClusterConfig const>);

    MCAPI ::webrtc::Timestamp CurrentTime() const;

    MCAPI void EnqueuePacket(::std::unique_ptr<::webrtc::RtpPacketToSend>);

    MCAPI ::webrtc::TimeDelta ExpectedQueueTime() const;

    MCAPI ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const;

    MCAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
    GetPendingPacket(::webrtc::PacedPacketInfo const&, ::webrtc::Timestamp, ::webrtc::Timestamp);

    MCAPI bool IsProbing() const;

    MCAPI void MaybeUpdateMediaRateDueToLongQueue(::webrtc::Timestamp);

    MCAPI ::webrtc::Timestamp NextSendTime() const;

    MCAPI ::webrtc::Timestamp NextUnpacedSendTime() const;

    MCAPI ::webrtc::Timestamp OldestPacketEnqueueTime() const;

    MCAPI void OnPacketSent(::webrtc::RtpPacketMediaType, ::webrtc::DataSize, ::webrtc::Timestamp);

    MCAPI PacingController(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::PacingController::Configuration
    );

    MCAPI ::webrtc::DataSize PaddingToAdd(::webrtc::DataSize, ::webrtc::DataSize) const;

    MCAPI void Pause();

    MCAPI void ProcessPackets();

    MCAPI ::webrtc::DataSize QueueSizeData() const;

    MCAPI void RemovePacketsForSsrc(uint);

    MCAPI void Resume();

    MCAPI void SetAccountForAudioPackets(bool);

    MCAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCAPI void SetCongested(bool);

    MCAPI void SetIncludeOverhead();

    MCAPI void SetPacingRates(::webrtc::DataRate, ::webrtc::DataRate);

    MCAPI void SetQueueTimeLimit(::webrtc::TimeDelta);

    MCAPI void SetSendBurstInterval(::webrtc::TimeDelta);

    MCAPI void SetTransportOverhead(::webrtc::DataSize);

    MCAPI bool ShouldSendKeepalive(::webrtc::Timestamp) const;

    MCAPI void UpdateBudgetWithElapsedTime(::webrtc::TimeDelta);

    MCAPI void UpdateBudgetWithSentData(::webrtc::DataSize);

    MCAPI void UpdatePaddingBudgetWithSentData(::webrtc::DataSize);

    MCAPI ::webrtc::TimeDelta UpdateTimeAndGetElapsed(::webrtc::Timestamp);

    MCAPI ~PacingController();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::webrtc::TimeDelta const& kMaxEarlyProbeProcessing();

    MCAPI static ::webrtc::TimeDelta const& kMaxPaddingReplayDuration();

    MCAPI static ::webrtc::TimeDelta const& kMinSleepTime();

    MCAPI static ::webrtc::TimeDelta const& kPausedProcessInterval();

    MCAPI static ::webrtc::TimeDelta const& kTargetPaddingDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::PacingController::Configuration
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
