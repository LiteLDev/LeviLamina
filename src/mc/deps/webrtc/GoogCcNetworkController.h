#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/NetworkControllerInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct GoogCcConfig; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkControllerConfig; }
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacerConfig; }
namespace webrtc { struct ProbeClusterConfig; }
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

class GoogCcNetworkController : public ::webrtc::NetworkControllerInterface {
public:
    // prevent constructor by default
    GoogCcNetworkController& operator=(GoogCcNetworkController const&);
    GoogCcNetworkController(GoogCcNetworkController const&);
    GoogCcNetworkController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GoogCcNetworkController@webrtc@@UEAA@XZ
    virtual ~GoogCcNetworkController();

    // vIndex: 1, symbol:
    // ?OnNetworkAvailability@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UNetworkAvailability@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnNetworkAvailability(struct webrtc::NetworkAvailability);

    // vIndex: 2, symbol:
    // ?OnNetworkRouteChange@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UNetworkRouteChange@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnNetworkRouteChange(struct webrtc::NetworkRouteChange);

    // vIndex: 3, symbol:
    // ?OnProcessInterval@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UProcessInterval@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnProcessInterval(struct webrtc::ProcessInterval);

    // vIndex: 4, symbol:
    // ?OnRemoteBitrateReport@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@URemoteBitrateReport@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnRemoteBitrateReport(struct webrtc::RemoteBitrateReport);

    // vIndex: 5, symbol:
    // ?OnRoundTripTimeUpdate@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@URoundTripTimeUpdate@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnRoundTripTimeUpdate(struct webrtc::RoundTripTimeUpdate);

    // vIndex: 6, symbol: ?OnSentPacket@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@USentPacket@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnSentPacket(struct webrtc::SentPacket);

    // vIndex: 7, symbol:
    // ?OnReceivedPacket@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UReceivedPacket@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnReceivedPacket(struct webrtc::ReceivedPacket);

    // vIndex: 8, symbol:
    // ?OnStreamsConfig@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UStreamsConfig@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnStreamsConfig(struct webrtc::StreamsConfig);

    // vIndex: 9, symbol:
    // ?OnTargetRateConstraints@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UTargetRateConstraints@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnTargetRateConstraints(struct webrtc::TargetRateConstraints);

    // vIndex: 10, symbol:
    // ?OnTransportLossReport@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UTransportLossReport@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnTransportLossReport(struct webrtc::TransportLossReport);

    // vIndex: 11, symbol:
    // ?OnTransportPacketsFeedback@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UTransportPacketsFeedback@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnTransportPacketsFeedback(struct webrtc::TransportPacketsFeedback);

    // vIndex: 12, symbol:
    // ?OnNetworkStateEstimate@GoogCcNetworkController@webrtc@@UEAA?AUNetworkControlUpdate@2@UNetworkStateEstimate@2@@Z
    virtual struct webrtc::NetworkControlUpdate OnNetworkStateEstimate(struct webrtc::NetworkStateEstimate);

    // symbol: ??0GoogCcNetworkController@webrtc@@QEAA@UNetworkControllerConfig@1@UGoogCcConfig@1@@Z
    MCAPI GoogCcNetworkController(struct webrtc::NetworkControllerConfig, struct webrtc::GoogCcConfig);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ClampConstraints@GoogCcNetworkController@webrtc@@AEAAXXZ
    MCAPI void ClampConstraints();

    // symbol: ?GetPacingRates@GoogCcNetworkController@webrtc@@AEBA?AUPacerConfig@2@VTimestamp@2@@Z
    MCAPI struct webrtc::PacerConfig GetPacingRates(class webrtc::Timestamp) const;

    // symbol:
    // ?MaybeTriggerOnNetworkChanged@GoogCcNetworkController@webrtc@@AEAAXPEAUNetworkControlUpdate@2@VTimestamp@2@@Z
    MCAPI void MaybeTriggerOnNetworkChanged(struct webrtc::NetworkControlUpdate*, class webrtc::Timestamp);

    // symbol:
    // ?ResetConstraints@GoogCcNetworkController@webrtc@@AEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@UTargetRateConstraints@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig> ResetConstraints(struct webrtc::TargetRateConstraints);

    // symbol: ?UpdateCongestionWindowSize@GoogCcNetworkController@webrtc@@AEAAXXZ
    MCAPI void UpdateCongestionWindowSize();

    // NOLINTEND
};

}; // namespace webrtc
