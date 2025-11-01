#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SctpTransportInformation; }
// clang-format on

namespace webrtc {

class SctpTransportObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnStateChange(::webrtc::SctpTransportInformation) = 0;

    // vIndex: 1
    virtual ~SctpTransportObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
