#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkStatePredictorFactoryInterface; }
// clang-format on

namespace webrtc {

class GoogCcNetworkControllerFactory {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GoogCcNetworkControllerFactory(::webrtc::NetworkStatePredictorFactoryInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::NetworkStatePredictorFactoryInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
