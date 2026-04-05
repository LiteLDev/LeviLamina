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

    virtual ::webrtc::NetworkControlUpdate OnNetworkAvailability(::webrtc::NetworkAvailability msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnNetworkRouteChange(::webrtc::NetworkRouteChange msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnProcessInterval(::webrtc::ProcessInterval msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnRemoteBitrateReport(::webrtc::RemoteBitrateReport msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnRoundTripTimeUpdate(::webrtc::RoundTripTimeUpdate msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnSentPacket(::webrtc::SentPacket sent_packet) = 0;

    virtual ::webrtc::NetworkControlUpdate OnReceivedPacket(::webrtc::ReceivedPacket received_packet) = 0;

    virtual ::webrtc::NetworkControlUpdate OnStreamsConfig(::webrtc::StreamsConfig msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTargetRateConstraints(::webrtc::TargetRateConstraints constraints) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTransportLossReport(::webrtc::TransportLossReport msg) = 0;

    virtual ::webrtc::NetworkControlUpdate OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback report) = 0;

    virtual ::webrtc::NetworkControlUpdate OnNetworkStateEstimate(::webrtc::NetworkStateEstimate msg) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
