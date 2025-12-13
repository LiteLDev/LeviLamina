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
    // vIndex: 0
    virtual ::std::unique_ptr<::webrtc::NetworkStatePredictor> CreateNetworkStatePredictor() = 0;

    // vIndex: 1
    virtual ~NetworkStatePredictorFactoryInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
