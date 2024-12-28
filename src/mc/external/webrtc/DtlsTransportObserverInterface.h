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
    // prevent constructor by default
    DtlsTransportObserverInterface& operator=(DtlsTransportObserverInterface const&);
    DtlsTransportObserverInterface(DtlsTransportObserverInterface const&);
    DtlsTransportObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnStateChange(::webrtc::DtlsTransportInformation) = 0;

    // vIndex: 1
    virtual void OnError(::webrtc::RTCError) = 0;

    // vIndex: 2
    virtual ~DtlsTransportObserverInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
