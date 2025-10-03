#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

class LossBasedBandwidthEstimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1288> mUnk25cbb6;
    ::ll::UntypedStorage<8, 8>    mUnk1c63c9;
    ::ll::UntypedStorage<8, 8>    mUnk8c35e4;
    ::ll::UntypedStorage<8, 8>    mUnkd3c486;
    ::ll::UntypedStorage<8, 8>    mUnk8beba7;
    ::ll::UntypedStorage<8, 8>    mUnk916691;
    ::ll::UntypedStorage<8, 8>    mUnk949294;
    ::ll::UntypedStorage<1, 1>    mUnke0f633;
    ::ll::UntypedStorage<8, 8>    mUnk40f7e1;
    ::ll::UntypedStorage<8, 8>    mUnk54a3f8;
    // NOLINTEND

public:
    // prevent constructor by default
    LossBasedBandwidthEstimation& operator=(LossBasedBandwidthEstimation const&);
    LossBasedBandwidthEstimation(LossBasedBandwidthEstimation const&);
    LossBasedBandwidthEstimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Initialize(::webrtc::DataRate bitrate);

    MCNAPI explicit LossBasedBandwidthEstimation(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI ::webrtc::DataRate Update(
        ::webrtc::Timestamp at_time,
        ::webrtc::DataRate  min_bitrate,
        ::webrtc::DataRate  wanted_bitrate,
        ::webrtc::TimeDelta last_round_trip_time
    );

    MCNAPI void UpdateAcknowledgedBitrate(::webrtc::DataRate acknowledged_bitrate, ::webrtc::Timestamp at_time);

    MCNAPI void
    UpdateLossStatistics(::std::vector<::webrtc::PacketResult> const& packet_results, ::webrtc::Timestamp at_time);

    MCNAPI ::webrtc::DataRate decreased_bitrate() const;

    MCNAPI double loss_decrease_threshold() const;

    MCNAPI double loss_increase_threshold() const;

    MCNAPI double loss_reset_threshold() const;

    MCNAPI ~LossBasedBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
