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
    // vIndex: 0
    virtual void OnStateChange(::webrtc::DtlsTransportInformation) = 0;

    // vIndex: 1
    virtual void OnError(::webrtc::RTCError) = 0;

    // vIndex: 2
    virtual ~DtlsTransportObserverInterface() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
