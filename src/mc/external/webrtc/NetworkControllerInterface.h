#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct ProcessInterval; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RemoteBitrateReport; }
namespace webrtc { struct RoundTripTimeUpdate; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct StreamsConfig; }
namespace webrtc { struct TargetRateConstraints; }
namespace webrtc { struct TransportLossReport; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class NetworkControllerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkControllerInterface() = default;

    virtual ::webrtc::NetworkControlUpdate OnNetworkAvailability(::webrtc::NetworkAvailability) = 0;

    virtual ::webrtc::NetworkControlUpdate OnNetworkRouteChange(::webrtc::NetworkRouteChange) = 0;

    virtual ::webrtc::NetworkControlUpdate OnProcessInterval(::webrtc::ProcessInterval) = 0;

    virtual ::webrtc::NetworkControlUpdate OnRemoteBitrateReport(::webrtc::RemoteBitrateReport) = 0;

    virtual ::webrtc::NetworkControlUpdate OnRoundTripTimeUpdate(::webrtc::RoundTripTimeUpdate) = 0;

    virtual ::webrtc::NetworkControlUpdate OnSentPacket(::webrtc::SentPacket) = 0;

    virtual ::webrtc::NetworkControlUpdate OnReceivedPacket(::webrtc::ReceivedPacket) = 0;

    virtual ::webrtc::NetworkControlUpdate OnStreamsConfig(::webrtc::StreamsConfig) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTargetRateConstraints(::webrtc::TargetRateConstraints) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTransportLossReport(::webrtc::TransportLossReport) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback) = 0;

    virtual ::webrtc::NetworkControlUpdate OnNetworkStateEstimate(::webrtc::NetworkStateEstimate) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
