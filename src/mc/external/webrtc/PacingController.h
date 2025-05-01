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
    MCNAPI void CreateProbeClusters(::rtc::ArrayView<::webrtc::ProbeClusterConfig const>);

    MCNAPI ::webrtc::Timestamp CurrentTime() const;

    MCNAPI void EnqueuePacket(::std::unique_ptr<::webrtc::RtpPacketToSend>);

    MCNAPI ::webrtc::TimeDelta ExpectedQueueTime() const;

    MCNAPI ::std::optional<::webrtc::Timestamp> FirstSentPacketTime() const;

    MCNAPI ::std::unique_ptr<::webrtc::RtpPacketToSend>
    GetPendingPacket(::webrtc::PacedPacketInfo const&, ::webrtc::Timestamp, ::webrtc::Timestamp);

    MCNAPI bool IsProbing() const;

    MCNAPI void MaybeUpdateMediaRateDueToLongQueue(::webrtc::Timestamp);

    MCNAPI ::webrtc::Timestamp NextSendTime() const;

    MCNAPI ::webrtc::Timestamp NextUnpacedSendTime() const;

    MCNAPI ::webrtc::Timestamp OldestPacketEnqueueTime() const;

    MCNAPI void OnPacketSent(::webrtc::RtpPacketMediaType, ::webrtc::DataSize, ::webrtc::Timestamp);

    MCNAPI PacingController(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::PacingController::Configuration
    );

    MCNAPI ::webrtc::DataSize PaddingToAdd(::webrtc::DataSize, ::webrtc::DataSize) const;

    MCNAPI void Pause();

    MCNAPI void ProcessPackets();

    MCNAPI ::webrtc::DataSize QueueSizeData() const;

    MCNAPI void RemovePacketsForSsrc(uint);

    MCNAPI void Resume();

    MCNAPI void SetAccountForAudioPackets(bool);

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCNAPI void SetCongested(bool);

    MCNAPI void SetIncludeOverhead();

    MCNAPI void SetPacingRates(::webrtc::DataRate, ::webrtc::DataRate);

    MCNAPI void SetQueueTimeLimit(::webrtc::TimeDelta);

    MCNAPI void SetSendBurstInterval(::webrtc::TimeDelta);

    MCNAPI void SetTransportOverhead(::webrtc::DataSize);

    MCNAPI bool ShouldSendKeepalive(::webrtc::Timestamp) const;

    MCNAPI void UpdateBudgetWithElapsedTime(::webrtc::TimeDelta);

    MCNAPI void UpdateBudgetWithSentData(::webrtc::DataSize);

    MCNAPI void UpdatePaddingBudgetWithSentData(::webrtc::DataSize);

    MCNAPI ::webrtc::TimeDelta UpdateTimeAndGetElapsed(::webrtc::Timestamp);

    MCNAPI ~PacingController();
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
    MCNAPI void* $ctor(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::PacingController::Configuration
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
