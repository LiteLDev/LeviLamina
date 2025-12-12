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
    // AimdRateControl inner types define
    enum class RateControlState : int {
        KRcHold     = 0,
        KRcIncrease = 1,
        KRcDecrease = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc5522c;
    ::ll::UntypedStorage<8, 8>   mUnk935179;
    ::ll::UntypedStorage<8, 8>   mUnkec15a9;
    ::ll::UntypedStorage<8, 8>   mUnk80350e;
    ::ll::UntypedStorage<8, 24>  mUnk9a75f6;
    ::ll::UntypedStorage<8, 144> mUnk1abe3c;
    ::ll::UntypedStorage<4, 4>   mUnkd1b935;
    ::ll::UntypedStorage<8, 8>   mUnk3ebd31;
    ::ll::UntypedStorage<8, 8>   mUnk68fa22;
    ::ll::UntypedStorage<8, 8>   mUnk799128;
    ::ll::UntypedStorage<1, 1>   mUnk1fc097;
    ::ll::UntypedStorage<8, 8>   mUnk7d18b9;
    ::ll::UntypedStorage<1, 1>   mUnk10d419;
    ::ll::UntypedStorage<8, 8>   mUnk32546d;
    ::ll::UntypedStorage<1, 1>   mUnkeeb910;
    ::ll::UntypedStorage<1, 1>   mUnkee7685;
    ::ll::UntypedStorage<1, 1>   mUnk49d9d1;
    ::ll::UntypedStorage<8, 80>  mUnkecc1a9;
    ::ll::UntypedStorage<8, 80>  mUnkdc31c3;
    ::ll::UntypedStorage<8, 16>  mUnka1efb7;
    // NOLINTEND

public:
    // prevent constructor by default
    AimdRateControl& operator=(AimdRateControl const&);
    AimdRateControl(AimdRateControl const&);
    AimdRateControl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::DataRate AdditiveRateIncrease(::webrtc::Timestamp at_time, ::webrtc::Timestamp last_time) const;

    MCNAPI AimdRateControl(::webrtc::FieldTrialsView const& key_value_config, bool send_side);

    MCNAPI void ChangeBitrate(::webrtc::RateControlInput const& input, ::webrtc::Timestamp at_time);

    MCNAPI void ChangeState(::webrtc::RateControlInput const& input, ::webrtc::Timestamp at_time);

    MCNAPI ::webrtc::DataRate ClampBitrate(::webrtc::DataRate new_bitrate) const;

    MCNAPI ::webrtc::TimeDelta GetExpectedBandwidthPeriod() const;

    MCNAPI double GetNearMaxIncreaseRateBpsPerSecond() const;

    MCNAPI bool InitialTimeToReduceFurther(::webrtc::Timestamp at_time) const;

    MCNAPI ::webrtc::DataRate LatestEstimate() const;

    MCNAPI ::webrtc::DataRate MultiplicativeRateIncrease(
        ::webrtc::Timestamp at_time,
        ::webrtc::Timestamp last_time,
        ::webrtc::DataRate  current_bitrate
    ) const;

    MCNAPI void SetEstimate(::webrtc::DataRate bitrate, ::webrtc::Timestamp at_time);

    MCNAPI void SetInApplicationLimitedRegion(bool in_alr);

    MCNAPI void SetMinBitrate(::webrtc::DataRate min_bitrate);

    MCNAPI void SetNetworkStateEstimate(::std::optional<::webrtc::NetworkStateEstimate> const& estimate);

    MCNAPI void SetRtt(::webrtc::TimeDelta rtt);

    MCNAPI void SetStartBitrate(::webrtc::DataRate start_bitrate);

    MCNAPI bool TimeToReduceFurther(::webrtc::Timestamp at_time, ::webrtc::DataRate estimated_throughput) const;

    MCNAPI ::webrtc::DataRate Update(::webrtc::RateControlInput const& input, ::webrtc::Timestamp at_time);

    MCNAPI bool ValidEstimate() const;

    MCNAPI ~AimdRateControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const& key_value_config, bool send_side);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
