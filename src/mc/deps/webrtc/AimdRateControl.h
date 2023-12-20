#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct RateControlInput; }
// clang-format on

namespace webrtc {

class AimdRateControl {
public:
    // prevent constructor by default
    AimdRateControl& operator=(AimdRateControl const&);
    AimdRateControl(AimdRateControl const&);
    AimdRateControl();

public:
    // NOLINTBEGIN
    // symbol: ??0AimdRateControl@webrtc@@QEAA@PEBVFieldTrialsView@1@_N@Z
    MCAPI AimdRateControl(class webrtc::FieldTrialsView const*, bool);

    // symbol: ?GetExpectedBandwidthPeriod@AimdRateControl@webrtc@@QEBA?AVTimeDelta@2@XZ
    MCAPI class webrtc::TimeDelta GetExpectedBandwidthPeriod() const;

    // symbol: ?GetNearMaxIncreaseRateBpsPerSecond@AimdRateControl@webrtc@@QEBANXZ
    MCAPI double GetNearMaxIncreaseRateBpsPerSecond() const;

    // symbol: ?InitialTimeToReduceFurther@AimdRateControl@webrtc@@QEBA_NVTimestamp@2@@Z
    MCAPI bool InitialTimeToReduceFurther(class webrtc::Timestamp) const;

    // symbol: ?LatestEstimate@AimdRateControl@webrtc@@QEBA?AVDataRate@2@XZ
    MCAPI class webrtc::DataRate LatestEstimate() const;

    // symbol: ?SetEstimate@AimdRateControl@webrtc@@QEAAXVDataRate@2@VTimestamp@2@@Z
    MCAPI void SetEstimate(class webrtc::DataRate, class webrtc::Timestamp);

    // symbol: ?SetInApplicationLimitedRegion@AimdRateControl@webrtc@@QEAAX_N@Z
    MCAPI void SetInApplicationLimitedRegion(bool);

    // symbol: ?SetMinBitrate@AimdRateControl@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetMinBitrate(class webrtc::DataRate);

    // symbol:
    // ?SetNetworkStateEstimate@AimdRateControl@webrtc@@QEAAXAEBV?$optional@UNetworkStateEstimate@webrtc@@@std@@@Z
    MCAPI void SetNetworkStateEstimate(std::optional<struct webrtc::NetworkStateEstimate> const&);

    // symbol: ?SetRtt@AimdRateControl@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void SetRtt(class webrtc::TimeDelta);

    // symbol: ?SetStartBitrate@AimdRateControl@webrtc@@QEAAXVDataRate@2@@Z
    MCAPI void SetStartBitrate(class webrtc::DataRate);

    // symbol: ?TimeToReduceFurther@AimdRateControl@webrtc@@QEBA_NVTimestamp@2@VDataRate@2@@Z
    MCAPI bool TimeToReduceFurther(class webrtc::Timestamp, class webrtc::DataRate) const;

    // symbol: ?Update@AimdRateControl@webrtc@@QEAA?AVDataRate@2@PEBURateControlInput@2@VTimestamp@2@@Z
    MCAPI class webrtc::DataRate Update(struct webrtc::RateControlInput const*, class webrtc::Timestamp);

    // symbol: ?ValidEstimate@AimdRateControl@webrtc@@QEBA_NXZ
    MCAPI bool ValidEstimate() const;

    // symbol: ??1AimdRateControl@webrtc@@QEAA@XZ
    MCAPI ~AimdRateControl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AdditiveRateIncrease@AimdRateControl@webrtc@@AEBA?AVDataRate@2@VTimestamp@2@0@Z
    MCAPI class webrtc::DataRate AdditiveRateIncrease(class webrtc::Timestamp, class webrtc::Timestamp) const;

    // symbol: ?ChangeBitrate@AimdRateControl@webrtc@@AEAAXAEBURateControlInput@2@VTimestamp@2@@Z
    MCAPI void ChangeBitrate(struct webrtc::RateControlInput const&, class webrtc::Timestamp);

    // symbol: ?ChangeState@AimdRateControl@webrtc@@AEAAXAEBURateControlInput@2@VTimestamp@2@@Z
    MCAPI void ChangeState(struct webrtc::RateControlInput const&, class webrtc::Timestamp);

    // symbol: ?ClampBitrate@AimdRateControl@webrtc@@AEBA?AVDataRate@2@V32@@Z
    MCAPI class webrtc::DataRate ClampBitrate(class webrtc::DataRate) const;

    // symbol: ?MultiplicativeRateIncrease@AimdRateControl@webrtc@@AEBA?AVDataRate@2@VTimestamp@2@0V32@@Z
    MCAPI class webrtc::DataRate
        MultiplicativeRateIncrease(class webrtc::Timestamp, class webrtc::Timestamp, class webrtc::DataRate) const;

    // NOLINTEND
};

}; // namespace webrtc
