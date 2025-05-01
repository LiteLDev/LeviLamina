#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
// clang-format on

namespace webrtc {

struct LinkCapacityEstimator {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LinkCapacityEstimator();

    MCNAPI ::webrtc::DataRate LowerBound() const;

    MCNAPI void OnOveruseDetected(::webrtc::DataRate);

    MCNAPI void Reset();

    MCNAPI void Update(::webrtc::DataRate, double);

    MCNAPI ::webrtc::DataRate UpperBound() const;

    MCNAPI double deviation_estimate_kbps() const;

    MCNAPI ::webrtc::DataRate estimate() const;

    MCNAPI bool has_estimate() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
