#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RobustThroughputEstimatorSettings; }
// clang-format on

namespace webrtc {

class RobustThroughputEstimator {
public:
    // prevent constructor by default
    RobustThroughputEstimator& operator=(RobustThroughputEstimator const&);
    RobustThroughputEstimator(RobustThroughputEstimator const&);
    RobustThroughputEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool FirstPacketOutsideWindow();

    MCAPI explicit RobustThroughputEstimator(::webrtc::RobustThroughputEstimatorSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RobustThroughputEstimatorSettings const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
