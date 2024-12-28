#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
// clang-format on

namespace webrtc {

struct LinkCapacityEstimator {
public:
    // prevent constructor by default
    LinkCapacityEstimator& operator=(LinkCapacityEstimator const&);
    LinkCapacityEstimator(LinkCapacityEstimator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LinkCapacityEstimator();

    MCAPI ::webrtc::DataRate LowerBound() const;

    MCAPI void OnOveruseDetected(::webrtc::DataRate);

    MCAPI void Reset();

    MCAPI void Update(::webrtc::DataRate, double);

    MCAPI ::webrtc::DataRate UpperBound() const;

    MCAPI double deviation_estimate_kbps() const;

    MCAPI ::webrtc::DataRate estimate() const;

    MCAPI bool has_estimate() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
