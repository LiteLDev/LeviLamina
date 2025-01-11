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
    // member functions
    // NOLINTBEGIN
    MCAPI void Initialize(::webrtc::DataRate);

    MCAPI explicit LossBasedBandwidthEstimation(::webrtc::FieldTrialsView const*);

    MCAPI ::webrtc::DataRate Update(::webrtc::Timestamp, ::webrtc::DataRate, ::webrtc::DataRate, ::webrtc::TimeDelta);

    MCAPI void UpdateAcknowledgedBitrate(::webrtc::DataRate, ::webrtc::Timestamp);

    MCAPI void UpdateLossStatistics(::std::vector<::webrtc::PacketResult> const&, ::webrtc::Timestamp);

    MCAPI ::webrtc::DataRate decreased_bitrate() const;

    MCAPI double loss_decrease_threshold() const;

    MCAPI double loss_increase_threshold() const;

    MCAPI double loss_reset_threshold() const;

    MCAPI ~LossBasedBandwidthEstimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
