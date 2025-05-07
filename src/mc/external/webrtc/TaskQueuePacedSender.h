#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PacingController.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class TaskQueuePacedSender {
public:
    // TaskQueuePacedSender inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // TaskQueuePacedSender inner types define
    struct Stats {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EnsureStarted();

    MCNAPI ::webrtc::TaskQueuePacedSender::Stats GetStats() const;

    MCNAPI void MaybeProcessPackets(::webrtc::Timestamp);

    MCNAPI void MaybeScheduleProcessPackets();

    MCNAPI void OnStatsUpdated(::webrtc::TaskQueuePacedSender::Stats const&);

    MCNAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCNAPI void SetSendBurstInterval(::webrtc::TimeDelta);

    MCNAPI TaskQueuePacedSender(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::TimeDelta,
        int
    );

    MCNAPI void UpdateStats();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& kNoPacketHoldback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::TimeDelta,
        int
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpPacketSender();

    MCNAPI static void** $vftableForRtpPacketPacer();
    // NOLINTEND
};

} // namespace webrtc
