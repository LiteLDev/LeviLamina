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
    virtual void OnStateChange(::webrtc::SctpTransportInformation) = 0;

    virtual ~SctpTransportObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
