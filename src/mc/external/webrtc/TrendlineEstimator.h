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
    // prevent constructor by default
    TrendlineEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Detect(double, double, int64);

    MCNAPI TrendlineEstimator(::webrtc::FieldTrialsView const*, ::webrtc::NetworkStatePredictor*);

    MCNAPI void UpdateThreshold(double, int64);

    MCNAPI void UpdateTrendline(double, double, int64, int64, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*, ::webrtc::NetworkStatePredictor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
