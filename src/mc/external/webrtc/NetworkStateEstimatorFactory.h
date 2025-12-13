#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStateEstimator; }
// clang-format on

namespace webrtc {

class NetworkStateEstimatorFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::NetworkStateEstimator> Create(::webrtc::FieldTrialsView const*) = 0;

    virtual ~NetworkStateEstimatorFactory() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
