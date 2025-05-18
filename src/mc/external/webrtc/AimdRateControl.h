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
    // prevent constructor by default
    AimdRateControl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::DataRate AdditiveRateIncrease(::webrtc::Timestamp, ::webrtc::Timestamp) const;

    MCNAPI AimdRateControl(::webrtc::FieldTrialsView const&, bool);

    MCNAPI void ChangeBitrate(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCNAPI void ChangeState(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCNAPI ::webrtc::DataRate ClampBitrate(::webrtc::DataRate) const;

    MCNAPI ::webrtc::TimeDelta GetExpectedBandwidthPeriod() const;

    MCNAPI double GetNearMaxIncreaseRateBpsPerSecond() const;

    MCNAPI bool InitialTimeToReduceFurther(::webrtc::Timestamp) const;

    MCNAPI ::webrtc::DataRate LatestEstimate() const;

    MCNAPI ::webrtc::DataRate
        MultiplicativeRateIncrease(::webrtc::Timestamp, ::webrtc::Timestamp, ::webrtc::DataRate) const;

    MCNAPI void SetEstimate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void SetInApplicationLimitedRegion(bool);

    MCNAPI void SetMinBitrate(::webrtc::DataRate);

    MCNAPI void SetNetworkStateEstimate(::std::optional<::webrtc::NetworkStateEstimate> const&);

    MCNAPI void SetRtt(::webrtc::TimeDelta);

    MCNAPI void SetStartBitrate(::webrtc::DataRate);

    MCNAPI bool TimeToReduceFurther(::webrtc::Timestamp, ::webrtc::DataRate) const;

    MCNAPI ::webrtc::DataRate Update(::webrtc::RateControlInput const&, ::webrtc::Timestamp);

    MCNAPI bool ValidEstimate() const;

    MCNAPI ~AimdRateControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
