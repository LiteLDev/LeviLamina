#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkStatePredictor; }
// clang-format on

namespace webrtc {

class NetworkStatePredictorFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::NetworkStatePredictor> CreateNetworkStatePredictor() = 0;

    virtual ~NetworkStatePredictorFactoryInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
