#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthLimitedCause.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct ProbeClusterConfig; }
// clang-format on

namespace webrtc {

class ProbeController {
public:
    // prevent constructor by default
    ProbeController& operator=(ProbeController const&);
    ProbeController(ProbeController const&);
    ProbeController();

public:
    // NOLINTBEGIN
    // symbol: ?EnablePeriodicAlrProbing@ProbeController@webrtc@@QEAAX_N@Z
    MCAPI void EnablePeriodicAlrProbing(bool);

    // symbol:
    // ?OnMaxTotalAllocatedBitrate@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VDataRate@2@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig>
          OnMaxTotalAllocatedBitrate(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol:
    // ?OnNetworkAvailability@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@UNetworkAvailability@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig> OnNetworkAvailability(struct webrtc::NetworkAvailability);

    // symbol: ??0ProbeController@webrtc@@QEAA@PEBVFieldTrialsView@1@PEAVRtcEventLog@1@@Z
    MCAPI ProbeController(class webrtc::FieldTrialsView const*, class webrtc::RtcEventLog*);

    // symbol:
    // ?Process@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig> Process(class webrtc::Timestamp);

    // symbol:
    // ?RequestProbe@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig> RequestProbe(class webrtc::Timestamp);

    // symbol: ?Reset@ProbeController@webrtc@@QEAAXVTimestamp@2@@Z
    MCAPI void Reset(class webrtc::Timestamp);

    // symbol: ?SetAlrEndedTimeMs@ProbeController@webrtc@@QEAAX_J@Z
    MCAPI void SetAlrEndedTimeMs(int64);

    // symbol: ?SetAlrStartTimeMs@ProbeController@webrtc@@QEAAXV?$optional@_J@std@@@Z
    MCAPI void SetAlrStartTimeMs(std::optional<int64>);

    // symbol:
    // ?SetBitrates@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VDataRate@2@00VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig>
          SetBitrates(class webrtc::DataRate, class webrtc::DataRate, class webrtc::DataRate, class webrtc::Timestamp);

    // symbol:
    // ?SetEstimatedBitrate@ProbeController@webrtc@@QEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VDataRate@2@W4BandwidthLimitedCause@2@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig>
          SetEstimatedBitrate(class webrtc::DataRate, ::webrtc::BandwidthLimitedCause, class webrtc::Timestamp);

    // symbol: ?SetNetworkStateEstimate@ProbeController@webrtc@@QEAAXUNetworkStateEstimate@2@@Z
    MCAPI void SetNetworkStateEstimate(struct webrtc::NetworkStateEstimate);

    // symbol: ??1ProbeController@webrtc@@QEAA@XZ
    MCAPI ~ProbeController();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?InitiateExponentialProbing@ProbeController@webrtc@@AEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VTimestamp@2@@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig> InitiateExponentialProbing(class webrtc::Timestamp);

    // symbol:
    // ?InitiateProbing@ProbeController@webrtc@@AEAA?AV?$vector@UProbeClusterConfig@webrtc@@V?$allocator@UProbeClusterConfig@webrtc@@@std@@@std@@VTimestamp@2@V?$vector@VDataRate@webrtc@@V?$allocator@VDataRate@webrtc@@@std@@@4@_N@Z
    MCAPI std::vector<struct webrtc::ProbeClusterConfig>
          InitiateProbing(class webrtc::Timestamp, std::vector<class webrtc::DataRate>, bool);

    // symbol: ?TimeForAlrProbe@ProbeController@webrtc@@AEBA_NVTimestamp@2@@Z
    MCAPI bool TimeForAlrProbe(class webrtc::Timestamp) const;

    // symbol: ?TimeForNetworkStateProbe@ProbeController@webrtc@@AEBA_NVTimestamp@2@@Z
    MCAPI bool TimeForNetworkStateProbe(class webrtc::Timestamp) const;

    // NOLINTEND
};

}; // namespace webrtc
