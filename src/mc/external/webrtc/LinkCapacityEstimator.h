#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
// clang-format on

namespace webrtc {

class LinkCapacityEstimator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk19f5fa;
    ::ll::UntypedStorage<8, 8>  mUnkb33dcf;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkCapacityEstimator& operator=(LinkCapacityEstimator const&);
    LinkCapacityEstimator(LinkCapacityEstimator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LinkCapacityEstimator();

    MCNAPI ::webrtc::DataRate LowerBound() const;

    MCNAPI void OnOveruseDetected(::webrtc::DataRate acknowledged_rate);

    MCNAPI void Reset();

    MCNAPI void Update(::webrtc::DataRate capacity_sample, double alpha);

    MCNAPI ::webrtc::DataRate UpperBound() const;

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
