#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStatePredictor; }
// clang-format on

namespace webrtc {

class TrendlineEstimator {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Detect(double, double, int64);

    MCAPI TrendlineEstimator(::webrtc::FieldTrialsView const*, ::webrtc::NetworkStatePredictor*);

    MCAPI void UpdateThreshold(double, int64);

    MCAPI void UpdateTrendline(double, double, int64, int64, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::NetworkStatePredictor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
