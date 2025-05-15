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

struct LossBasedBandwidthEstimation {
public:
    // prevent constructor by default
    LossBasedBandwidthEstimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Initialize(::webrtc::DataRate);

    MCNAPI explicit LossBasedBandwidthEstimation(::webrtc::FieldTrialsView const*);

    MCNAPI ::webrtc::DataRate Update(::webrtc::Timestamp, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::TimeDelta);

    MCNAPI void UpdateAcknowledgedBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCNAPI void UpdateLossStatistics(::std::vector<::webrtc::PacketResult> const&, ::webrtc::Timestamp);

    MCNAPI ::webrtc::DataRate decreased_bitrate() const;

    MCNAPI double loss_decrease_threshold() const;

    MCNAPI double loss_increase_threshold() const;

    MCNAPI double loss_reset_threshold() const;

    MCNAPI ~LossBasedBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
