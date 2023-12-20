#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
// clang-format on

namespace webrtc {

class LinkCapacityEstimator {
public:
    // prevent constructor by default
    LinkCapacityEstimator& operator=(LinkCapacityEstimator const&);
    LinkCapacityEstimator(LinkCapacityEstimator const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LinkCapacityEstimator@webrtc@@QEAA@XZ
    MCAPI LinkCapacityEstimator();

    // symbol: ?LowerBound@LinkCapacityEstimator@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate LowerBound() const;

    // symbol: ?OnOveruseDetected@LinkCapacityEstimator@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void OnOveruseDetected(class webrtc::DataRate);

    // symbol: ?Reset@LinkCapacityEstimator@webrtc@@QEAAXXZ
    MCAPI void Reset();

    // symbol: ?UpperBound@LinkCapacityEstimator@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate UpperBound() const;

    // symbol: ?estimate@LinkCapacityEstimator@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate estimate() const;

    // symbol: ?has_estimate@LinkCapacityEstimator@webrtc@@QEBA_NXZ
    MCAPI bool has_estimate() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Update@LinkCapacityEstimator@webrtc@@AEAAXVDataRate@2@N@Z
    MCAPI void Update(class webrtc::DataRate, double);

    // symbol: ?deviation_estimate_kbps@LinkCapacityEstimator@webrtc@@AEBANXZ
    MCAPI double deviation_estimate_kbps() const;

    // NOLINTEND
};

}; // namespace webrtc
