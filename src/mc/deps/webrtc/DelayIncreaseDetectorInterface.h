#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"

namespace webrtc {

class DelayIncreaseDetectorInterface {
public:
    // prevent constructor by default
    DelayIncreaseDetectorInterface& operator=(DelayIncreaseDetectorInterface const&);
    DelayIncreaseDetectorInterface(DelayIncreaseDetectorInterface const&);
    DelayIncreaseDetectorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DelayIncreaseDetectorInterface@webrtc@@UEAA@XZ
    virtual ~DelayIncreaseDetectorInterface();

    // vIndex: 1, symbol: ?Update@TrendlineEstimator@webrtc@@UEAAXNN_J0_K_N@Z
    virtual void Update(double, double, int64, int64, uint64, bool) = 0;

    // vIndex: 2, symbol: ?State@TrendlineEstimator@webrtc@@UEBA?AW4BandwidthUsage@2@XZ
    virtual ::webrtc::BandwidthUsage State() const = 0;

    // NOLINTEND
};

}; // namespace webrtc
