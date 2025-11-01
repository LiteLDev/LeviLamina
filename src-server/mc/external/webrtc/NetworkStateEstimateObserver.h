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
    // vIndex: 0
    virtual void OnRemoteNetworkEstimate(::webrtc::NetworkStateEstimate) = 0;

    // vIndex: 1
    virtual ~NetworkStateEstimateObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
