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
    // vIndex: 0
    virtual ~NetworkControllerInterface() = default;

    // vIndex: 1
    virtual ::webrtc::NetworkControlUpdate OnNetworkAvailability(::webrtc::NetworkAvailability) = 0;

    // vIndex: 2
    virtual ::webrtc::NetworkControlUpdate OnNetworkRouteChange(::webrtc::NetworkRouteChange) = 0;

    // vIndex: 3
    virtual ::webrtc::NetworkControlUpdate OnProcessInterval(::webrtc::ProcessInterval) = 0;

    // vIndex: 4
    virtual ::webrtc::NetworkControlUpdate OnRemoteBitrateReport(::webrtc::RemoteBitrateReport) = 0;

    // vIndex: 5
    virtual ::webrtc::NetworkControlUpdate OnRoundTripTimeUpdate(::webrtc::RoundTripTimeUpdate) = 0;

    // vIndex: 6
    virtual ::webrtc::NetworkControlUpdate OnSentPacket(::webrtc::SentPacket) = 0;

    // vIndex: 7
    virtual ::webrtc::NetworkControlUpdate OnReceivedPacket(::webrtc::ReceivedPacket) = 0;

    // vIndex: 8
    virtual ::webrtc::NetworkControlUpdate OnStreamsConfig(::webrtc::StreamsConfig) = 0;

    // vIndex: 9
    virtual ::webrtc::NetworkControlUpdate OnTargetRateConstraints(::webrtc::TargetRateConstraints) = 0;

    // vIndex: 10
    virtual ::webrtc::NetworkControlUpdate OnTransportLossReport(::webrtc::TransportLossReport) = 0;

    // vIndex: 11
    virtual ::webrtc::NetworkControlUpdate OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback) = 0;

    // vIndex: 12
    virtual ::webrtc::NetworkControlUpdate OnNetworkStateEstimate(::webrtc::NetworkStateEstimate) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
