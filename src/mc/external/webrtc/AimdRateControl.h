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

struct AimdRateControl {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::DataRate AdditiveRateIncrease(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCAPI AimdRateControl(::webrtc::FieldTrialsView const&, bool);

    MCAPI void ChangeBitrate(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCAPI void ChangeState(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCAPI ::webrtc::DataRate ClampBitrate(::webrtc::DataRate) const;

    MCAPI ::webrtc::TimeDelta GetExpectedBandwidthPeriod() const;

    MCAPI double GetNearMaxIncreaseRateBpsPerSecond() const;

    MCAPI bool InitialTimeToReduceFurther(::webrtc::Timestamp) const;

    MCAPI ::webrtc::DataRate LatestEstimate() const;

    MCAPI ::webrtc::DataRate
        MultiplicativeRateIncrease(::webrtc::Timestamp, ::webrtc::Timestamp, ::webrtc::DataRate) const;

    MCAPI void SetEstimate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void SetInApplicationLimitedRegion(bool);

    MCAPI void SetMinBitrate(::webrtc::DataRate);

    MCAPI void SetNetworkStateEstimate(::std::optional<::webrtc::NetworkStateEstimate> const&);

    MCAPI void SetRtt(::webrtc::TimeDelta);

    MCAPI void SetStartBitrate(::webrtc::DataRate);

    MCAPI bool TimeToReduceFurther(::webrtc::Timestamp, ::webrtc::DataRate) const;

    MCAPI ::webrtc::DataRate Update(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCAPI bool ValidEstimate() const;

    MCAPI ~AimdRateControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
