#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct NetworkStateEstimate; }
// clang-format on

namespace webrtc {

class NetworkStateEstimateObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnRemoteNetworkEstimate(::webrtc::NetworkStateEstimate) = 0;

    virtual ~NetworkStateEstimateObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
