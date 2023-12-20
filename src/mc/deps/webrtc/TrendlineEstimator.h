#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"
#include "mc/deps/webrtc/DelayIncreaseDetectorInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DelayIncreaseDetectorInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStatePredictor; }
// clang-format on

namespace webrtc {

class TrendlineEstimator : public ::webrtc::DelayIncreaseDetectorInterface {
public:
    // prevent constructor by default
    TrendlineEstimator& operator=(TrendlineEstimator const&);
    TrendlineEstimator(TrendlineEstimator const&);
    TrendlineEstimator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TrendlineEstimator@webrtc@@UEAA@XZ
    virtual ~TrendlineEstimator();

    // vIndex: 1, symbol: ?Update@TrendlineEstimator@webrtc@@UEAAXNN_J0_K_N@Z
    virtual void Update(double, double, int64, int64, uint64, bool);

    // vIndex: 2, symbol: ?State@TrendlineEstimator@webrtc@@UEBA?AW4BandwidthUsage@2@XZ
    virtual ::webrtc::BandwidthUsage State() const;

    // symbol: ??0TrendlineEstimator@webrtc@@QEAA@PEBVFieldTrialsView@1@PEAVNetworkStatePredictor@1@@Z
    MCAPI TrendlineEstimator(class webrtc::FieldTrialsView const*, class webrtc::NetworkStatePredictor*);

    // symbol: ?UpdateTrendline@TrendlineEstimator@webrtc@@QEAAXNN_J0_K@Z
    MCAPI void UpdateTrendline(double, double, int64, int64, uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Detect@TrendlineEstimator@webrtc@@AEAAXNN_J@Z
    MCAPI void Detect(double, double, int64);

    // symbol: ?UpdateThreshold@TrendlineEstimator@webrtc@@AEAAXN_J@Z
    MCAPI void UpdateThreshold(double, int64);

    // NOLINTEND
};

}; // namespace webrtc
