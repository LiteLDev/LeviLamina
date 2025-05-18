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
    RobustThroughputEstimator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool FirstPacketOutsideWindow();

    MCNAPI explicit RobustThroughputEstimator(::webrtc::RobustThroughputEstimatorSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RobustThroughputEstimatorSettings const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
