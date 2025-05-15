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
    // RtpTransportControllerSend inner types declare
    // clang-format off
    struct LossReport;
    // clang-format on

    // RtpTransportControllerSend inner types define
    struct LossReport {};

public:
    // prevent constructor by default
    RtpTransportControllerSend();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::BitrateConstraints> ApplyOrLiftRelayCap(bool);

    MCNAPI ::std::optional<bool> GetCongestedStateUpdate() const;

    MCNAPI bool IsRelevantRouteChange(::rtc::NetworkRoute const&, ::rtc::NetworkRoute const&) const;

    MCNAPI void MaybeCreateControllers();

    MCNAPI void NotifyBweOfPacedSentPacket(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&);

    MCNAPI void PostUpdates(::webrtc::NetworkControlUpdate);

    MCNAPI void ProcessSentPacket(::rtc::SentPacket const&);

    MCNAPI void ProcessSentPacketUpdates(::webrtc::NetworkControlUpdate);

    MCNAPI explicit RtpTransportControllerSend(::webrtc::RtpTransportConfig const&);

    MCNAPI void StartProcessPeriodicTasks();

    MCNAPI void UpdateBitrateConstraints(::webrtc::BitrateConstraints const&);

    MCNAPI void UpdateCongestedState();

    MCNAPI void UpdateControlState();

    MCNAPI void UpdateControllerWithTimeInterval();

    MCNAPI void UpdateInitialConstraints(::webrtc::TargetRateConstraints);

    MCNAPI void UpdateNetworkAvailability();

    MCNAPI void UpdateStreamsConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpTransportConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpTransportControllerSendInterface();

    MCNAPI static void** $vftableForNetworkLinkRtcpObserver();

    MCNAPI static void** $vftableForNetworkStateEstimateObserver();
    // NOLINTEND
};

} // namespace webrtc
