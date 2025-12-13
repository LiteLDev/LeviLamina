#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct TransportPacketsFeedback; }
// clang-format on

namespace webrtc {

class NetworkStateEstimator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::webrtc::NetworkStateEstimate> GetCurrentEstimate() = 0;

    virtual void OnTransportPacketsFeedback(::webrtc::TransportPacketsFeedback const&) = 0;

    virtual void OnReceivedPacket(::webrtc::PacketResult const&);

    virtual void OnRouteChange(::webrtc::NetworkRouteChange const&) = 0;

    virtual ~NetworkStateEstimator() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
