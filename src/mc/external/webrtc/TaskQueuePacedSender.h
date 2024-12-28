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
    struct Stats {
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // prevent constructor by default
    TaskQueuePacedSender& operator=(TaskQueuePacedSender const&);
    TaskQueuePacedSender(TaskQueuePacedSender const&);
    TaskQueuePacedSender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void EnsureStarted();

    MCAPI ::webrtc::TaskQueuePacedSender::Stats GetStats() const;

    MCAPI void MaybeProcessPackets(::webrtc::Timestamp);

    MCAPI void MaybeScheduleProcessPackets();

    MCAPI void OnStatsUpdated(::webrtc::TaskQueuePacedSender::Stats const&);

    MCAPI void SetAllowProbeWithoutMediaPacket(bool);

    MCAPI void SetSendBurstInterval(::webrtc::TimeDelta);

    MCAPI TaskQueuePacedSender(
        ::webrtc::Clock*,
        ::webrtc::PacingController::PacketSender*,
        ::webrtc::FieldTrialsView const&,
        ::webrtc::TimeDelta,
        int
    );

    MCAPI void UpdateStats();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& kNoPacketHoldback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI static void** $vftableForRtpPacketSender();

    MCAPI static void** $vftableForRtpPacketPacer();
    // NOLINTEND
};

} // namespace webrtc
