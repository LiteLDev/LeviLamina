#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkStatePredictorFactoryInterface; }
// clang-format on

namespace webrtc {

class GoogCcNetworkControllerFactory {
public:
    // prevent constructor by default
    GoogCcNetworkControllerFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GoogCcNetworkControllerFactory(::webrtc::NetworkStatePredictorFactoryInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::NetworkStatePredictorFactoryInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
