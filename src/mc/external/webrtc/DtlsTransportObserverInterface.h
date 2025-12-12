#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInformation; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class DtlsTransportObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnStateChange(::webrtc::DtlsTransportInformation) = 0;

    virtual void OnError(::webrtc::RTCError) = 0;

    virtual ~DtlsTransportObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
