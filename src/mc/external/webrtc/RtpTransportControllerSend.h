#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct RtpTransportConfig; }
namespace webrtc { struct TargetRateConstraints; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSend {
public:
    // prevent constructor by default
    RtpTransportControllerSend& operator=(RtpTransportControllerSend const&);
    RtpTransportControllerSend(RtpTransportControllerSend const&);
    RtpTransportControllerSend();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::BitrateConstraints> ApplyOrLiftRelayCap(bool);

    MCAPI ::std::optional<bool> GetCongestedStateUpdate() const;

    MCAPI bool IsRelevantRouteChange(::rtc::NetworkRoute const&, ::rtc::NetworkRoute const&) const;

    MCAPI void MaybeCreateControllers();

    MCAPI void NotifyBweOfPacedSentPacket(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&);

    MCAPI void PostUpdates(::webrtc::NetworkControlUpdate);

    MCAPI void ProcessSentPacket(::rtc::SentPacket const&);

    MCAPI void ProcessSentPacketUpdates(::webrtc::NetworkControlUpdate);

    MCAPI explicit RtpTransportControllerSend(::webrtc::RtpTransportConfig const&);

    MCAPI void StartProcessPeriodicTasks();

    MCAPI void UpdateBitrateConstraints(::webrtc::BitrateConstraints const&);

    MCAPI void UpdateCongestedState();

    MCAPI void UpdateControlState();

    MCAPI void UpdateControllerWithTimeInterval();

    MCAPI void UpdateInitialConstraints(::webrtc::TargetRateConstraints);

    MCAPI void UpdateNetworkAvailability();

    MCAPI void UpdateStreamsConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpTransportConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRtpTransportControllerSendInterface();

    MCAPI static void** $vftableForNetworkLinkRtcpObserver();

    MCAPI static void** $vftableForNetworkStateEstimateObserver();
    // NOLINTEND
};

} // namespace webrtc
